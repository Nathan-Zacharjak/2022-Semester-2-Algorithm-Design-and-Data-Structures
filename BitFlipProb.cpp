#include "BitFlipProb.h"
#include "Individual.h"
#include <time.h>
#include <stdlib.h>

using namespace std;

Individual BitFlipProb::mutate(Individual ind, int k){
    for (int i = 0; i < ind.getLength(); i++){
        double num = (double)rand() / RAND_MAX;

        if (num < prob){
            ind.flipBit(i);
        }
    }

    return ind;
}

BitFlipProb::BitFlipProb(double _prob){
    prob = _prob;
    srand(time(NULL));
}