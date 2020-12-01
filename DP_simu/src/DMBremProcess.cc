#include "DP_simu/DMBremProcess.hh"
#include "DP_simu/DarkMatter.hh"
#include "DP_simu/DarkPhoton.hh"

#include "G4ProcessType.hh"
#include "G4EmProcessSubType.hh"
#include "G4SystemOfUnits.hh"

DMBremProcess::DMBremProcess(DarkMatter* DarkMatterPointerIn, G4ParticleDefinition* theDMParticlePtrIn, G4double BiasSigmaFactorIn)
: G4VDiscreteProcess( "DMProcessDMBrem", fUserDefined ),  // fElectromagnetic
  myDarkMatter(DarkMatterPointerIn),
  theDMParticlePtr(theDMParticlePtrIn),
  BiasSigmaFactor(BiasSigmaFactorIn)
{
//here I don't think what to define
}

G4bool DMBremProcess::IsApplicable(const G4ParticleDefinition & pDef)
{
  return ("e-" == pDef.GetParticleName());
  //return fModelPtr->IsApplicableToParticle(pDef);
}

//Here is not need for invisible decay, will be added in future 
//G4double DMProcessDMBrem::GetMeanFreePath( const G4Track& aTrack, G4double, /*previousStepSize*/ G4ForceCondition* /*condition*/ )
//{
//  G4double DensityMat = aTrack.GetMaterial()->GetDensity()/(g/cm3);
//  G4double ekin = aTrack.GetKineticEnergy()/GeV;
//  //Define if we can emission of Dark Matter/Dark Photon
//  if( myDarkMatter->EmissionAllowed(ekin, DensityMat) ) 
//  {
//    G4double XMeanFreePath = myDarkMatter->GetMeanFreePathFactor()/myDarkMatter->GetSigmaTot(ekin);
//    XMeanFreePath /= BiasSigmaFactor;
//    // std::cout << "DMMeanFreePath = " << XMeanFreePath << std::endl;
//    return XMeanFreePath;
//  }
//  //if not emit, nothing
//  return DBL_MAX;
//}



G4VParticleChange* DMBremProcess::PostStepDoIt( const G4Track& aTrack, const G4Step& aStep )
{
  const G4double incidentE = aTrack.GetKineticEnergy();
  //const G4double DMMass = theDMParticleAPrimePtr->GetPDGMass();
  G4ThreeVector incidentDir = aTrack.GetMomentumDirection();

  G4double XAcc, angles[2];
  XAcc = myDarkMatter->SimulateEmissionWithAngle(incidentE/GeV, angles);

  // Check if it failed? In this case XAcc = 0

  if(XAcc > 0.001) myDarkMatter->EmissionSimulated();

  const G4double recoilE = incidentE * (1. - XAcc), recoilTheta = 0.; // this is not simulated
  G4double DMTheta = angles[0], DMPhi = angles[1];
  G4double DME = incidentE * XAcc;

  // Initialize DM direction vector:
  G4ThreeVector DMDirection(0., 0., .1);
  {
    DMDirection.setMag(1.);
    DMDirection.setTheta( DMTheta );
    DMDirection.setPhi( DMPhi );
    DMDirection.rotateUz(incidentDir);
  }
  // Initialize new projectile particle direction vector:
  G4ThreeVector projDirection(0., 0., 1.);
  {
    projDirection.setMag(1.);
    projDirection.setTheta( recoilTheta );
    projDirection.setPhi( - DMPhi );
    projDirection.rotateUz(incidentDir);
  }
  
  G4DynamicParticle* movingDM = new G4DynamicParticle( theDMParticlePtr, DMDirection, DME );
  G4ParticleChange.Initialize( aTrack );

  // Set DM:
  G4ParticleChange.SetNumberOfSecondaries( 1 );
  G4ParticleChange.AddSecondary( movingDM );
  // Set projectile changes:
  G4ParticleChange.ProposeEnergy( recoilE );
  G4ParticleChange.ProposeMomentumDirection( projDirection );

  std::cout << "DM PDG ID = " << theDMParticlePtr->GetPDGEncoding() 
            << " emitted by " << aTrack.GetDefinition()->GetParticleName()
            << " with energy = " << incidentE/GeV << " DM energy = " << DME/GeV << std::endl;

  return G4VDiscreteProcess::PostStepDoIt(aTrack, aStep);
}