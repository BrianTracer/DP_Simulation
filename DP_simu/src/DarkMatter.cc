//this a big Class to calculate the Dark matter cross sections
//Now we onliy add dark photon channel
//If you want to add more process, you can first define the particles. Then to touch files defining particles or define the process
//TO.DO:Add the decay channel of Dark Photon(width is kept for NA64)
#include "DP_simu/DarkMatter.hh"
#include "Randomize.hh"
#include <iostream>
#include <gsl>

DarkMatter::DarkMatter(double MAIn, double EThreshIn, double SigmaNormIn, double ANuclIn, double ZNuclIn, double DensityIn, double epsilIn, int IDecayIn)
:MA(MAIn), EThresh(EThreshIn), SigmaNorm(SigmaNormIn),
ANucl(ANuclIn), ZNucl(ZNuclIn), Density(DensityIn), epsilBench(0.0001), epsil(epsilIn), IDecay(IDecayIn),
AccumulatedProbability(0.), NEmissions(0)
{
  int NPTAB = 15;
  nptable = NPTAB;
  double epi[NPTAB]={0.008, 0.02, 0.05, 0.1, 0.2, 0.5, 1., 2., 5., 10., 15., 25., 50., 80., 150.};
  for(int ip=0; ip < nptable; ip++) {ep[ip] = epi[ip];}
}


DarkMatter::~DarkMatter()
{;}

double chi (double t, void * pp) {
  ParamsForChi* params = (ParamsForChi*)pp;

  double d = 0.164/pow((params->AA),2/3);
  double ap = 773.0/Mel/pow((params->ZZ),2/3);
  double a = 111.0/Mel/pow((params->ZZ),1/3);
  double G2el = (params->ZZ)*(params->ZZ)*a*a*a*a*t*t/(1.0+a*a*t)/(1.0+a*a*t)/(1.0+t/d)/(1.0+t/d);
  double G2in = (params->ZZ)*ap*ap*ap*ap*t*t/(1.0+ap*ap*t)/(1.0+ap*ap*t)/(1.0+t/0.71)/(1.0+t/0.71)
    /(1.0+t/0.71)/(1.0+t/0.71)/(1.0+t/0.71)/(1.0+t/0.71)/(1.0+t/0.71)/(1.0+t/0.71)
    *(1.0+t*(MUp*MUp-1.0)/4.0/Mpr/Mpr)*(1.0+t*(MUp*MUp-1.0)/4.0/Mpr/Mpr);
  double G2 = G2el+G2in;
  double ttmin = (params->MMA)*(params->MMA)*(params->MMA)*(params->MMA)/4.0/(params->EE0)/(params->EE0);
  //double ttmin = lowerLimit(x,theta,p);
  double Under = G2*(t-ttmin)/t/t;

  return Under;
}

double DarkMatter::GetSigmaMax(double E0)
{
  if(MA > 0.001) {
    return parinv(E0, ep, sigmax, nptable);
  } else {
    return 1.;
  }
}


double DarkMatter::GetSigmaAngleMax(double E0)
{
  if(MA > 0.001) {
    return parinv(E0, ep, sigmaxa, nptable);
  } else {
    return 1.;
  }
}

//double DarkMatter::GetSigmaTot0(double E0)
//{  
//  return parinv(E0, ep, sigmap, nptable);
//}

/*
void DarkMatter::PrepareTable()
{
  if(MA > 0.001) {
   for(int ip=0; ip < nptable; ip++) {
      sigmap[ip] = TotalCrossSectionCalc(ep[ip]);
      sigmax[ip] = MaxCrossSectionCalc(ep[ip]);
      sigmaxa[ip] = MaxCrossSectionAngleCalc(ep[ip]);
    }
  }
}
*/

double DarkMatter::GetSigmaTot0(double E0)
{
  return parinv(E0, ep, sigmap, nptable);
}


double DarkMatter::CrossSectionDSDX(double XEv, double E0)
{
    if(XEv*E0 <= MA) return 0.;
    double momentumOfDP=sqrt(XEv*XEv*E0*E0-MA*MA);
    double umaxtilde = -MA*MA*(1.0-XEv)/XEv - Mmu*Mmu*XEv;
    double Numerator = Mmu*Mmu*XEv*(-2. + 2.*XEv + XEv*XEv) - 2.*umaxtilde*(3. - 3.*XEv + XEv*XEv);
    double Denominator = 3.*XEv*umaxtilde*umaxtilde;
    double sigma = momentumOfDP*Numerator/Denominator;
    return sigma;
}


bool DarkMatter::EmissionAllowed(double E0, double DensityMat)
{
  if(E0 < 1.001*MA) return false;
  if(E0 < EThresh) return false;
  if(NEmissions) return false; // For G4 DM classes, only emmission once
  if(fabs(DensityMat - Density) > 0.1) return false;//must hit on target
  return true;
}

bool DarkMatter::Emission(double E0, double DensityMat, double StepLength)
{
  if(E0	< 1.001*MA) return false;
  if(E0 < EThresh) return false;
  if(fabs(DensityMat - Density) > 0.1) return false;
  double prob = SigmaNorm*GetSigmaTot(E0)*StepLength;
  AccumulatedProbability += prob;
  double tmprandom = G4UniformRand();
  if(tmprandom < prob) return true;
  return false;
}

double DarkMatter::SimulateEmission(double E0, double* angles)
{
  double Xmin = MA/E0;
  double Xmax = 1.0-Xmin; // For E0~1 GeV and MA~500 MeV its rather small! 
  if(ParentPDGID == 22 || ParentPDGID == -11) {
    Xmin = 0.999;
    Xmax = 0.99999;
  }
  double sigmaMax = GetSigmaMax(E0);
  int maxiter = 20000;

  double XAcc, ThetaAcc, PhiAcc;

  for( int iii = 1; iii < maxiter; iii++) {

    double XEv  =  G4UniformRand() * (Xmax-Xmin) + Xmin;
    double UThetaEv = 0.; // we set angles to zero, generate only x

    //Now we sample only Diff. c.s. for X below 

    if(XEv*E0 < MA) return 0.;

    double sigma = CrossSectionDSDX(XEv, E0);

    double UU = G4UniformRand() * sigmaMax;

    if(sigma > sigmaMax) printf ("Maximum violated: ratio = % .18f\n", sigma/sigmaMax);

    if(sigma >= UU) {
      XAcc = XEv;
      ThetaAcc =sqrt(2.0*UThetaEv); // this is just a theta accepted!!! 
      //PhiAcc = G4UniformRand() * 2. * 3.1415926;
      PhiAcc = 0.;

      printf ("Accepted at iteration %d\n", iii);
      printf( "EParent = %e XAcc = %e ThetaAcc = %e\n ", E0, XAcc, ThetaAcc);

      angles[0] = ThetaAcc;
      angles[1] = PhiAcc;
      return XAcc;
    }
  }
  printf ("Simulation of emission failed after N iterations = %d\n", maxiter);
  return 0.;
}


double DarkMatter::SimulateEmissionWithAngle(double E0, double* angles)
{
  double Xmin = MA/E0;
  double Xmax = 1.0-Xmin; // Misha,  For E0~1 GeV and MA~500 MeV its rather small!
  //double ThetaMaxA = 0.0001*sqrt((MA/E0)/(0.001/100.));
  double ThetaMaxA = 0.0001*sqrt(MA/0.001)*(100./E0);
  double UThetaMaxA = 0.5*ThetaMaxA*ThetaMaxA; // Nota Bene !!! this is maximum of u= 0.5*theta^2 variable!!
  if(MA <= 0.001) UThetaMaxA = 0.; // Angle is simulated only for MA > 0.001 GeV
  double sigmaMax = GetSigmaAngleMax(E0);
  int maxiter = 1000000;

  double XAcc, ThetaAcc, PhiAcc;

  for( int iii = 1; iii < maxiter; iii++) {

    double XEv, FactorSigma=1.;
    if(MA > 0.001) {
      double XFactor = 1.5*sqrt(0.001/MA);
      double AlphaX = exp(-(1. - Xmax)/XFactor);
      double BetaX = exp(-(1. - Xmin)/XFactor);
      double DeltaX = - XFactor * log(BetaX+G4UniformRand()*(AlphaX-BetaX));
      XEv = 1. - DeltaX;
      FactorSigma = exp(DeltaX/XFactor);
    } else {
      XEv  =  G4UniformRand() * (Xmax-Xmin) + Xmin;
    }

    double UThetaEv, FactorSigmaU=1.;
    if(MA > 0.001) {
      double UFactor = 0.3*UThetaMaxA;
      double BetaU = exp(-UThetaMaxA/UFactor);
      UThetaEv = - UFactor * log(BetaU+G4UniformRand()*(1.-BetaU));
      FactorSigmaU = exp(UThetaEv/UFactor);
    } else {
      UThetaEv = G4UniformRand() * UThetaMaxA; // this is a u = 0.5*theta^2 variable!!!
    }

    if(XEv*E0 < MA) return 0.;

    double sigma = FactorSigma * FactorSigmaU * CrossSectionDSDXDU(XEv, UThetaEv, E0);

    double UU = G4UniformRand() * sigmaMax;

    if(sigma > sigmaMax) {
      printf ("Maximum violated: ratio = % .18f\n", sigma/sigmaMax);
      sigmaMax = 1.05*sigma;
    }

    if(sigma >= UU) {
      XAcc = XEv;
      ThetaAcc =sqrt(2.0*UThetaEv); // this is just a theta accepted!!!
      PhiAcc = G4UniformRand() * 2. * 3.1415926;

      printf ("Accepted at iteration %d\n", iii);
      printf( "EParent = %e XAcc = %e ThetaAcc = %e\n ", E0, XAcc, ThetaAcc);

      angles[0] = ThetaAcc;
      angles[1] = PhiAcc;
      return XAcc;
    }
  }
  printf ("Simulation of emission failed after N iterations = %d\n", maxiter);
  return 0.;
}
