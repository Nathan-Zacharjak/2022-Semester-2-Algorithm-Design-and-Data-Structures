#include "Rearrange.h"
#include "Individual.h"
#include <string>

using namespace std;

Individual Rearrange::mutate(Individual ind, int k){
    string dna = ind.getString();
    string temp1 = dna.substr(0, k-1);
    string temp2 = dna.substr(k, string::npos);

    dna = temp2 + temp1;
    ind.setString(dna);
}