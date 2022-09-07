#ifndef REARRANGE_H
#define REARRANGE_H

#include "Mutator.h"
#include "Individual.h"

class Rearrange: public Mutator{
private:

public:
    Individual mutate(Individual ind, int k);
};

#endif