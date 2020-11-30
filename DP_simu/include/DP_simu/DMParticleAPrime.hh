#pragma once

#include <G4ParticleDefinition.hh>

class DMParticleAPrime: public G4ParticleDefinition {
private:
    static DMParticleAPrime * theInstance;
    DMParticleAPrime();
    ~DMParticleAPrime();
public:
    static DMParticleAPrime * Definition();
};