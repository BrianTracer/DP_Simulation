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
// $Id$
//
/// \file DetectorMessenger.hh
/// \brief Definition of the DetectorMessenger class

#ifndef DetectorMessenger_h
#define DetectorMessenger_h 1

#include "globals.hh"
#include "G4UImessenger.hh"

class DetectorConstruction;

class G4UIdirectory;

class G4UIcmdWithAString;

class G4UIcmdWithAnInteger;

class G4UIcmdWithADouble;

class G4UIcmdWithABool;

class G4UIcmdWithADoubleAndUnit;

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

/// Messenger class that defines commands for DetectorConstruction.
///
/// It implements commands:
/// - //det/setTargetMaterial name
/// - //det/setChamberMaterial name
/// - //det/setField value unit
/// - //det/stepMax value unit

class DetectorMessenger : public G4UImessenger {
public:
    DetectorMessenger(DetectorConstruction *);

    virtual ~DetectorMessenger();

    void SetNewValue(G4UIcommand *, G4String) override;

private:
    DetectorConstruction *fDetectorConstruction;

    G4UIdirectory *fDirectory;
    G4UIdirectory *fDetDirectory;

    G4UIcmdWithADoubleAndUnit *fSetTBxCmd;
    G4UIcmdWithADoubleAndUnit *fSetRBxCmd;

    G4UIcmdWithADoubleAndUnit *fSetELayerPosCmd;
    G4UIcmdWithABool *fSetifBiasCmd;

    G4UIcmdWithABool *fifOpticalCmd;

    G4UIcmdWithABool *fifSaveGeomCmd;
};

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

#endif
