#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H

#include <string>

class Individual{
private:
    std::string binaryString;
public:
    std::string getString();
    void setString(std::string newString);
    int getBit(int pos);
    void flipBit(int pos);
    int getMaxOnes();
    int getLength();
    Individual(int length);
    Individual(std::string list);
};

#endif