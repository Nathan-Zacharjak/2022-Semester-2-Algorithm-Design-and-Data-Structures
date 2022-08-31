#include <iostream>
#include <vector>
#include "FilterOdd.h"
#include "FilterNonPositive.h"
#include "FilterForTwoDigitPositive.h"

using namespace std;

int main(void){
    FilterOdd filter1;
    FilterNonPositive filter2;
    FilterForTwoDigitPositive filter3;

    vector<int> vector1 = {-1,20,3,-40,5};
    vector<int> filteredVec1 = filter1.filter(vector1);
    vector<int> filteredVec2 = filter2.filter(vector1);
    vector<int> filteredVec3 = filter3.filter(vector1);

    for (int i = 0; i < filteredVec1.size(); i++){
        cout << filteredVec1.at(i) << endl;
    }

    cout << "vector2" << endl;

    for (int i = 0; i < filteredVec2.size(); i++){
        cout << filteredVec2.at(i) << endl;
    }
    cout << "vector3" << endl;

    for (int i = 0; i < filteredVec3.size(); i++){
        cout << filteredVec3.at(i) << endl;
    }

    return 0;
}
