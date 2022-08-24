#ifndef REVERSE_H
#define REVERSE_H

#include <string>

class Reverse{
private:
    
public:
    Reverse();
    int reverseDigit(int value);
    int reverseDigit(int value, int acc);
    std::string reverseString(std::string letters);
};

#endif