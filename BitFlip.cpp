#include "BitFlip.h"
#include "Individual.h"

using namespace std;

Individual BitFlip::mutate(Individual ind, int k){
    k = k % ind.getLength();
    ind.flipBit(k);
}