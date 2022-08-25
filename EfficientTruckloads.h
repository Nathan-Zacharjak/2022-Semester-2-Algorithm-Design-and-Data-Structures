#ifndef EFFICIENTTRUCKLOADS_H
#define EFFICIENTTRUCKLOADS_H

#include <map>
#include <array>

class EfficientTruckloads{
private:
    static std::map<std::array<int,2>,int> loadTable;
public:
    EfficientTruckloads();
    int numTrucks(int numCrates, int loadSize);
};

#endif