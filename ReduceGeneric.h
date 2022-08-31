#ifndef REDUCEGENERIC_H
#define REDUCEGENERIC_H

#include <vector>

class ReduceGeneric{
private:
    virtual int binaryOperator(int input1, int input2) = 0;
    int reduce(std::vector<int> input, int acc, int index);
public:
    int reduce(std::vector<int> input);
};

#endif