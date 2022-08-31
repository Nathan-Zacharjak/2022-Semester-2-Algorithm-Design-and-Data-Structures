#include "ReduceMinimum.h"
#include <vector>

using namespace std;

int ReduceMinimum::binaryOperator(int input1, int input2){
    if (input1 < input2){
        return input1;
    } else {
        return input2;
    }
}