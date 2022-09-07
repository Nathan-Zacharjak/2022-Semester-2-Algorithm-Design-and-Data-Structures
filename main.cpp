#include <iostream>
#include <string>
#include "Individual.h"

using namespace std;

int main(void){
    Individual ind1(5);
    string dna = "10101";
    Individual ind2(dna);

    cout << ind1.getString() << endl;
    cout << ind2.getString() << endl;
    cout << ind2.getBit(3) << endl;
    cout << ind2.getBit(7) << endl;
    ind2.flipBit(7);
    ind2.flipBit(3);
    cout << ind2.getString() << endl;
    cout << ind2.getMaxOnes() << endl;
    cout << ind2.getLength() << endl;

    return 0;
}
