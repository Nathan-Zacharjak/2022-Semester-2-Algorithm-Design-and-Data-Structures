#include "Reverse.h"
#include <string>
#include <iostream>

using namespace std;

Reverse::Reverse(){

}

int Reverse::reverseDigit(int value){
    if (value < 0){
        return -1
    }
    
    return reverseDigit(value, 0);
}

int Reverse::reverseDigit(int value, int acc){
    int right = value % 10;
    acc = acc + right;
    value = value/10;

    if (value > 0){
        acc = acc * 10;
        return reverseDigit(value,acc);
    }

    return acc;
}

string Reverse::reverseString(string letters){
    int length = letters.length();
    if (letters == "" || length == 1){
        return letters;
    }

    char temp = letters.at(0);
    letters.at(0) = letters.at(length - 1);
    letters.at(length - 1) = temp;

    string truncate = letters;
    truncate.erase(length - 1, 1);
    truncate.erase(0, 1);

    return letters.at(0) + reverseString(truncate) + letters.at(length - 1);
}