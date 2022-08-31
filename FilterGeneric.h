#ifndef FILTERGENERIC_H
#define FILTERGENERIC_H

#include <vector>

class FilterGeneric{
private:
    virtual bool g(int input) = 0;
    std::vector<int> filter(std::vector<int> input, std::vector<int> acc, int index);
public:
    std::vector<int> filter(std::vector<int> input);
};

#endif