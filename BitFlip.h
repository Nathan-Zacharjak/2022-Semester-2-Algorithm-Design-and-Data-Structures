#ifndef BITFLIP_H
#define BITFLIP_H

#include "Mutator.h"
#include "Individual.h"

class BitFlip: public Mutator{
private:

public:
    Individual mutate(Individual ind, int k);
};

#endif