#include "ReduceGCD.h"
#include <vector>

using namespace std;

int ReduceGCD::binaryOperator(int input1, int input2){
    int GCD = 1;
    int min = input1;

    if (input2 < input1){
        min = input2;
    }
    
    for (int i = min; i > 0; i--){
        if (input1 % i == 0 && input2 % i == 0){
            return i;
        }
        
    }

    return GCD;
}