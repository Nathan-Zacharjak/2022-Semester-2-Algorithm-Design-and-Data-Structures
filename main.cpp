#include <iostream>
#include <string>
#include "Reverse.h"
#include "Truckloads.h"

using namespace std;

int main(void){
    // Reverse reverse1;

    // cout << reverse1.reverseDigit(-123) << endl;
    // cout << reverse1.reverseString("-123") << endl;

    Truckloads truckload1;
    
    cout << truckload1.numTrucks(1024,5) << endl;

    return 0;
}
