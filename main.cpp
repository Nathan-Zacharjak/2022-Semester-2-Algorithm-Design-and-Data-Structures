#include <iostream>
#include <vector>
#include "MapTriple.h"
#include "MapSquare.h"
#include "MapAbsoluteValue.h"

using namespace std;

int main(void){
    MapTriple map1;
    MapSquare map2;
    MapAbsoluteValue map3;

    vector<int> vector1 = {-1,-2,-3,-4,5};
    vector<int> mappedVec1 = map1.map(vector1);
    vector<int> mappedVec2 = map2.map(vector1);
    vector<int> mappedVec3 = map3.map(vector1);

    for (int i = 0; i < mappedVec1.size(); i++){
        cout << mappedVec1.at(i) << endl;
    }

    for (int i = 0; i < mappedVec2.size(); i++){
        cout << mappedVec2.at(i) << endl;
    }

    for (int i = 0; i < mappedVec3.size(); i++){
        cout << mappedVec3.at(i) << endl;
    }

    return 0;
}
