#pragma once

#include <G4ParticleDefinition.hh>

class DMParticle: public G4ParticleDefinition {
private:
    static DMParticle * theInstance;
    DMParticle();
    ~DMParticle();
public:
    static DMParticle * Definition();
};