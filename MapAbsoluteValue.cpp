#include "MapAbsoluteValue.h"
#include <vector>

using namespace std;

int MapAbsoluteValue::f(int input){
    if (input < 0){
        input = -input;
    }
    
    return input;
}