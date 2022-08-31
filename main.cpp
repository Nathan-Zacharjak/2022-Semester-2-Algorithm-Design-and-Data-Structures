#include <iostream>
#include <vector>
#include "ReduceGCD.h"
#include "ReduceMinimum.h"

using namespace std;

int main(void){
    ReduceGCD reduce1;
    ReduceMinimum reduce2;

    vector<int> vector1 = {5,7,8,4};
    int reduceedVec1 = reduce1.reduce(vector1);
    int reduceedVec2 = reduce2.reduce(vector1);

    cout << reduceedVec1 << endl;
    cout << reduceedVec2 << endl;

    return 0;
}
