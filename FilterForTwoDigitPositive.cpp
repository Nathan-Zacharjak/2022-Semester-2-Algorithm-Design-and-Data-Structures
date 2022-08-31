#include "FilterForTwoDigitPositive.h"
#include <vector>

using namespace std;

bool FilterForTwoDigitPositive::g(int input){
    return input/10 > 0;
}