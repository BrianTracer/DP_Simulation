#include "DP_simu/DarkMatterPhysics.hh"

#include "DP_simu/DarkMatter.hh"
#include "DP_simu/DMParticle.hh"
#include "DP_simu/DPBremProcess.hh"

#include "G4Electron.hh"
#include "G4Positron.hh"
#include "G4Gamma.hh"
#include "G4MuonMinus.hh"
#include "G4MuonPlus.hh"

#include "G4BuilderType.hh"
#include "G4SystemOfUnits.hh
#include <iostream>

DarkMatterPhycis::DarkMatterPhysics()
: G4VPhysicsconstructor("DarkMatterPhysics")
{
    SetPhysicsType(bUnknown);
    G4double BiasSigmafactor0=8.e8;//here is a guess from calchep results
    G4double Etresh=35.;//the sebsivity calculation for the invisible mode, need to be checked
    double dummy_mass=0.0167;
    myDarkMatter = new DarkPhotons(dummy_mass, Etresh);
    BiasSigmaFactor = BiasSigmaFactor0 * 0.0001 * 0.0001 / (myDarkMatter->Getepsil()*myDarkMatter->Getepsil());

}

DarkMatterPhysics::~DarkMatterPhysics()
{
    if(myDarkMatter) delete myDarkMatter;
}

void DarkMatterPhysics::ConstructParticle()
{
  // This call to particle definition must be first or at least go before
  // Physics::ConstructProcess()
  DMParticleAPrime::Definition();
}

void DarkMatterPhysics::ConstructProcess()
{
    //here to define which process should be add to the physicslist
    G4ParticleDefinition* theDMParticlePtr = 0;
  if(myDarkMatter->GetParentPDGID() == 11) 
  {
    theDMParticlePtr = DMParticleAPrime::Definition();
  }
  


  //if(!theDMParticlePtr) {G4cout << "DarkMatterPhysics::ConstructProcess: did not manage to determine the DM particle type, exiting" << G4endl; exit(1);}

  myDarkMatter->SetMA(theDMParticlePtr->GetPDGMass()/GeV);
  myDarkMatter->PrepareTable();

  G4PhysicsListHelper * phLHelper = G4PhysicsListHelper::GetPhysicsListHelper();

  phLHelper->DumpOrdingParameterTable();
  
  phLHelper->RegisterProcess( new DMProcessDMBrem(myDarkMatter, theDMParticlePtr, BiasSigmaFactor),
                              G4Electron::ElectronDefinition() );
  phLHelper->RegisterProcess( new G4StepLimiter(), theDMParticlePtr );


}