#include "ReduceGeneric.h"
#include <vector>

using namespace std;

int ReduceGeneric::reduce(vector<int> input){
    return reduce(input, input.at(0), 1);
}

int ReduceGeneric::reduce(vector<int> input, int acc, int index){
    int size = input.size();

    if (index >= size){
        return acc;
    }
    
    acc = binaryOperator(input.at(index), acc);
    index += 1;

    return reduce(input, acc, index);
}