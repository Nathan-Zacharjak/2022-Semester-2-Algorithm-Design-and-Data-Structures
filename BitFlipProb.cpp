#include "BitFlipProb.h"
#include "Individual.h"
#include <random>

using namespace std;

Individual BitFlipProb::mutate(Individual ind, int k){
    default_random_engine generator;
    uniform_real_distribution<double> randNum(0.0,1.0);

    for (int i = 0; i < ind.getLength(); i++){
        if (randNum(generator) < prob){
            ind.flipBit(i);
        }
    }
}

BitFlipProb::BitFlipProb(double _prob){
    prob = _prob;
}