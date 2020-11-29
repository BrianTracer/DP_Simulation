//
// ********************************************************************
// * License and Disclaimer                                           *
// *                                                                  *
// * The  Geant4 software  is  copyright of the Copyright Holders  of *
// * the Geant4 Collaboration.  It is provided  under  the terms  and *
// * conditions of the Geant4 Software License,  included in the file *
// * LICENSE and available at  http://cern.ch/geant4/license .  These *
// * include a list of copyright holders.                             *
// *                                                                  *
// * Neither the authors of this software system, nor their employing *
// * institutes,nor the agencies providing financial support for this *
// * work  make  any representation or  warranty, express or implied, *
// * regarding  this  software system or assume any liability for its *
// * use.  Please see the license in the file  LICENSE  and URL above *
// * for the full disclaimer and the limitation of liability.         *
// *                                                                  *
// * This  code  implementation is the result of  the  scientific and *
// * technical work of the GEANT4 collaboration.                      *
// * By using,  copying,  modifying or  distributing the software (or *
// * any work based  on the software)  you  agree  to acknowledge its *
// * use  in  resulting  scientific  publications,  and indicate your *
// * acceptance of all terms of the Geant4 Software license.          *
// ********************************************************************
//
/// \file /src/BOptrChangeCrossSection.cc
/// \brief Implementation of the BOptrChangeCrossSection class
//
#include <utility>

#include "DP_simu/BOptrChangeCrossSection.hh"
#include "G4BiasingProcessInterface.hh"
#include "G4BOptnChangeCrossSection.hh"

#include "G4ParticleDefinition.hh"
#include "G4ParticleTable.hh"
#include "G4VProcess.hh"
#include "G4SystemOfUnits.hh"

#include "Randomize.hh"

#include "G4InteractionLawPhysical.hh"

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

BOptrChangeCrossSection::BOptrChangeCrossSection(const G4String& particleName, G4double BF,
                                                 G4double Em, G4String BP,
                                                 G4String         name)
  : G4VBiasingOperator(std::move(name)),
    fSetup(true),
    BiasFactor(BF),
    Emin(Em),
    BiasProcess(std::move(BP))
{
  fMessenger = new BiasingMessenger(this);

  fParticleToBias = G4ParticleTable::GetParticleTable()->FindParticle(particleName);
  
  if ( fParticleToBias == nullptr )
    {
      G4ExceptionDescription ed;
      ed << "Particle `" << particleName << "' not found !" << G4endl;
      G4Exception("BOptrChangeCrossSection(...)",
                  "ex.01",
                  JustWarning,
                  ed);
    }
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

BOptrChangeCrossSection::~BOptrChangeCrossSection()
{
  for (auto & fChangeCrossSectionOperation : fChangeCrossSectionOperations) delete fChangeCrossSectionOperation.second;

  delete fMessenger;
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

void BOptrChangeCrossSection::StartRun()
{
  // --------------
  // -- Setup stage:
  // ---------------
  // -- Start by collecting processes under biasing, create needed biasing
  // -- operations and associate these operations to the processes:
  if ( fSetup )
    {
      nBias = 0;
      const G4ProcessManager* processManager = fParticleToBias->GetProcessManager();
      const G4BiasingProcessSharedData* sharedData =
        G4BiasingProcessInterface::GetSharedData( processManager );
      if ( sharedData ) // -- sharedData tested, as is can happen a user attaches an operator to a
                        // -- volume but without defined BiasingProcessInterface processes.
        {
          for (auto wrapperProcess : sharedData->GetPhysicsBiasingProcessInterfaces())
            {
              G4String operationName = "XSchange-" +
                wrapperProcess->GetWrappedProcess()->GetProcessName();

              G4cout<<"Process: "<<operationName<<G4endl;

              fChangeCrossSectionOperations[wrapperProcess] = 
                new G4BOptnChangeCrossSection(operationName);
            }
        }
      fSetup = false;
    }
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

G4VBiasingOperation* 
BOptrChangeCrossSection::ProposeOccurenceBiasingOperation(const G4Track*            track, 
                                                              const G4BiasingProcessInterface*
                                                                               callingProcess)
{
  //G4cout<< "Biasing Process: " << callingProcess->GetWrappedProcess()->GetProcessName() << ", Emin: "<< Emin<< G4endl; 

  // -----------------------------------------------------
  // -- Check if current particle type is the one to bias:
  // -----------------------------------------------------
  if ( track->GetDefinition() != fParticleToBias ) return nullptr;

  //if ( track->GetParentID() > 1 ) return 0;

  if ( callingProcess->GetWrappedProcess()->GetProcessName() != BiasProcess ) return nullptr;

  if ( track->GetTotalEnergy() <= Emin ) return nullptr;

  //G4cout<<"==> Biasing "<<BiasProcess<<", Emin = "<<Emin<<", with Factor of "<<BiasFactor<<" ..."<<G4endl;
  // ---------------------------------------------------------------------
  // -- select and setup the biasing operation for current callingProcess:
  // ---------------------------------------------------------------------
  // -- Check if the analog cross-section well defined : for example, the conversion
  // -- process for a gamma below e+e- creation threshold has an DBL_MAX interaction
  // -- length. Nothing is done in this case (ie, let analog process to deal with the case)
  G4double analogInteractionLength =  
    callingProcess->GetWrappedProcess()->GetCurrentInteractionLength();
  if ( analogInteractionLength > DBL_MAX/10. ) return nullptr;

  // -- Analog cross-section is well-defined:
  G4double analogXS = 1./analogInteractionLength;

  // -- Choose a constant cross-section bias. But at this level, this factor can be made
  // -- direction dependent, like in the exponential transform MCNP case, or it
  // -- can be chosen differently, depending on the process, etc.
  G4double XStransformation = BiasFactor ;
  
  // -- fetch the operation associated to this callingProcess:
  G4BOptnChangeCrossSection*   operation = fChangeCrossSectionOperations[callingProcess];
  // -- get the operation that was proposed to the process in the previous step:
  G4VBiasingOperation* previousOperation = callingProcess->GetPreviousOccurenceBiasingOperation();
  
  // -- now setup the operation to be returned to the process: this
  // -- consists in setting the biased cross-section, and in asking
  // -- the operation to sample its exponential interaction law.
  // -- To do this, to first order, the two lines:
  //        operation->SetBiasedCrossSection( XStransformation * analogXS );
  //        operation->Sample();
  // -- are correct and sufficient.
  // -- But, to avoid having to shoot a random number each time, we sample
  // -- only on the first time the operation is proposed, or if the interaction
  // -- occured. If the interaction did not occur for the process in the previous,
  // -- we update the number of interaction length instead of resampling.
  if ( previousOperation == nullptr )
    {
      operation->SetBiasedCrossSection( XStransformation * analogXS );
      operation->Sample();

      //G4cout<< "Biasing Process: " << callingProcess->GetWrappedProcess()->GetProcessName() << ", Factor: "<< XStransformation * analogXS << G4endl; 
    }
  else
    {
      if (  previousOperation != operation )
        {
          // -- should not happen !
          G4ExceptionDescription ed;
          ed << " Logic problem in operation handling !" << G4endl;
          G4Exception("BOptrChangeCrossSection::ProposeOccurenceBiasingOperation(...)",
                      "ex.02",
                      JustWarning,
                      ed);
          return nullptr;
        }
      if ( operation->GetInteractionOccured() )
        {
          operation->SetBiasedCrossSection( XStransformation * analogXS );
          operation->Sample();
        }
      else
        {
          // -- update the 'interaction length' and underneath 'number of interaction lengths'
          // -- for past step  (this takes into accout the previous step cross-section value)
          operation->UpdateForStep( callingProcess->GetPreviousStepSize() );
          // -- update the cross-section value:
          operation->SetBiasedCrossSection( XStransformation * analogXS );
          // -- forces recomputation of the 'interaction length' taking into account above
          // -- new cross-section value [tricky : to be improved]
          operation->UpdateForStep( 0.0 );
        }
    }
  
  return operation;
  
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

void BOptrChangeCrossSection::
OperationApplied(const G4BiasingProcessInterface*           callingProcess, 
                 G4BiasingAppliedCase,
                 G4VBiasingOperation*             occurenceOperationApplied,
                 G4double,
                 G4VBiasingOperation*,    
                 const G4VParticleChange*                                  )
{
  G4BOptnChangeCrossSection* operation = fChangeCrossSectionOperations[callingProcess];
  if ( operation ==  occurenceOperationApplied ) operation->SetInteractionOccured();
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

