#ifndef MAP_GENERIC_H
#define MAP_GENERIC_H

#include <vector>

class MapGeneric{
private:
    virtual int f(int input) = 0;
    std::vector<int> map(std::vector<int> input, std::vector<int> acc, int index);
public:
    std::vector<int> map(std::vector<int> input);
};

#endif