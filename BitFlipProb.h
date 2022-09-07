#ifndef BITFLIPPROB_H
#define BITFLIPPROB_H

#include "Mutator.h"
#include "Individual.h"

class BitFlipProb: public Mutator{
private:
    double prob;
public:
    Individual mutate(Individual ind, int k);
    BitFlipProb(double prob);
};

#endif