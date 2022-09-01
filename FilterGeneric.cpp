#include "FilterGeneric.h"
#include <vector>

using namespace std;

vector<int> FilterGeneric::filter(vector<int> input){
    vector<int> acc;
    return filter(input, acc, 0);
}

vector<int> FilterGeneric::filter(vector<int> input, vector<int> acc, int index){
    if (index >= input.size()){
        return acc;
    }

    if (g(input.at(index))){
        acc.push_back(input.at(index));
    }

    index += 1;
    return filter(input, acc, index);
}