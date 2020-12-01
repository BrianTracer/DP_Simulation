// This is a class to simulate dark photons A production by electrons in matter eN -> eNA
// Description is in the base class DarkMatter code
// To be used in a Geant4 application.
//
//
#include "DarkMatter.hh"
#include "DarkPhotons.hh"
#include "Utils.hh"

#include "Randomize.hh"

#include <gsl/gsl_math.h>
#include <gsl/gsl_multimin.h>
#include <gsl/gsl_monte.h>
#include <gsl/gsl_monte_plain.h>
#include <gsl/gsl_monte_miser.h>
#include <gsl/gsl_monte_vegas.h>
#include <gsl/gsl_integration.h>
#include <gsl/gsl_rng.h>

#include "G4ios.hh"
#include <stdlib.h>
#include <math.h>
#include <iostream>

#define EPSPARINV 1.e-8
#define  nMALowM 18 // number of MA grid divisions

double TotCSVectorParticle(double MAtest) // CS in GeV^-2 for epsilon=1
{
  double  MMAA[nMALowM] = {0.000001, 0.00001, 0.00002, 0.00003, 0.00004, 0.00005, 0.00006, 0.00007, 0.0001, 0.00015, 0.0002,
                           0.0003, 0.0004, 0.0005, 0.0006, 0.0007, 0.0008, 0.0009}; // mass of A' in GeV
  double TotCSList[nMALowM] ={831989.,714214.,608205.,537442.,485739.,445566.,413065.,386006.,325514.,261274.,219140.,
                                    165447.,131948.,108852.,91940.7,79039.6,68896.5,60733.3};

  return parinv(MAtest, MMAA, TotCSList, nMALowM); // This is to be converted to pb and multiplied by eps^2
}


DarkPhotons::DarkPhotons(double MAIn, double EThreshIn, double SigmaNormIn, double ANuclIn, double ZNuclIn, double DensityIn,
                         double epsilIn, int IDecayIn)
: DarkMatter(MAIn, EThreshIn, SigmaNormIn, ANuclIn, ZNuclIn, DensityIn, epsilIn, IDecayIn)
{
  DMType = 1;
  ParentPDGID = 11;
  DaughterPDGID = 11;
  std::cout << "Initialized DarkPhotons off electrons and positrons for material density = " << DensityIn << std::endl;
  std::cout << std::endl;
}


DarkPhotons::~DarkPhotons()
{;}


double DarkPhotons::GetSigmaTot(double E0)
{
  if(MA > 0.001) {
    return GetSigmaTot0(E0);
  } else {
    return TotCSVectorParticle(MA)*GeVtoPb*epsilBench*epsilBench;
  }
}


double DarkPhotons::CrossSectionDSDX(double XEv, double E0)
{
    sigma = 0;
  if(MA > 0.001) {
    double momentumOfDP=sqrt(XEv*XEv*E0*E0-MA*MA);
    double umaxtilde = -MA*MA*(1.0-XEv)/XEv - Mel*Mel*XEv;
    double Numerator = Mel*Mel*XEv*(-2. + 2.*XEv + XEv*XEv) - 2.*umaxtilde*(3. - 3.*XEv + XEv*XEv);
    double Denominator = 3.*XEv*umaxtilde*umaxtilde;
    double sigma = momentumOfDP*Numerator/Denominator;
    return sigma;
  } else {
    return sigma;
  }
}


double DarkPhotons::CrossSectionDSDXDU(double XEv, double UThetaEv, double E0)
{ sigma = 0;
  if(MA > 0.001) {
    double Uxtheta = 2.*E0*E0*UThetaEv*XEv + MA*MA*(1.0-XEv)/XEv + Mel*Mel*XEv;
    double AA = (1. - XEv + XEv*XEv/2.) / (Uxtheta*Uxtheta);
    double BB = (1. - XEv)*(1. - XEv)*MA*MA/(Uxtheta*Uxtheta*Uxtheta*Uxtheta);
    double CC = MA*MA - Uxtheta*XEv/(1. - XEv);
    double sigma = XEv * (AA + BB*CC);
    return sigma;
  } else {
    return sigma ;
  }
}


double DarkPhotons::Width()
{
  return 1./3.*1./137.*MA*epsil*epsil*sqrt(1.-4.*Mel*Mel/(MA*MA))*(1.+2.*Mel*Mel/(MA*MA));
}
