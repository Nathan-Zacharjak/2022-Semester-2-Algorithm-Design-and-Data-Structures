#include "Individual.h"
#include <string>

using namespace std;

string Individual::getString(){
    return binaryString;
}

void Individual::setString(string newString){
    binaryString = newString;
} 

int Individual::getBit(int pos){
    int length = binaryString.length();

    if (pos < 0 || pos >= length){
        return -1;
    }

    // -48 is an ASCI table trick to quickly convert a char to a number
    int bit = binaryString.at(pos) - 48;

    return bit;
}

void Individual::flipBit(int pos){
    int length = binaryString.length();
    if (pos < 0 || pos >= length){
        return;
    }

    char bit = binaryString.at(pos);

    if (bit == '0'){
        bit = '1';
    } else if (bit == '1') {
        bit = '0';
    }
    
    binaryString.at(pos) = bit;
}

int Individual::getMaxOnes(){
    int maxCount = 0;
    int count = 0;
    int length = binaryString.length();

    for (int i = 0; i < length; i++){
        if (binaryString.at(i) == '1'){
            count += 1;

            if (count > maxCount){
                maxCount = count;
            }
        } else {
            count = 0;
        }
    }
    
    return maxCount;
}

int Individual::getLength(){
    int length = binaryString.length();
    return length;
}

Individual::Individual(int length){
    binaryString.assign(length, '0');
}

Individual::Individual(string list){
    binaryString.assign(list);
}