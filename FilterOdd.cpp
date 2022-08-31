#include "FilterOdd.h"
#include <vector>

using namespace std;

bool FilterOdd::g(int input){
    return input % 2 != 0;
}