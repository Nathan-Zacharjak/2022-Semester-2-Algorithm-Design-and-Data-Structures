#include "MapGeneric.h"
#include <vector>

using namespace std;

vector<int> MapGeneric::map(vector<int> input){
    vector<int> acc;
    return map(input, acc, 0);
}

vector<int> MapGeneric::map(vector<int> input, vector<int> acc, int index){
    if (acc.size() >= input.size()){
        return acc;
    }

    acc.push_back(f(input.at(index)));
    index += 1;
    return map(input, acc, index);
}