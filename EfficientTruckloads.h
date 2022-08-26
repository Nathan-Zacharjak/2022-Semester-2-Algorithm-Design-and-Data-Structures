#ifndef EFFICIENTTRUCKLOADS_H
#define EFFICIENTTRUCKLOADS_H

#include <array>

#define TRUCKLOADS_MAX 10000


class EfficientTruckloads{
private:

public:
    static std::array<std::array<int, TRUCKLOADS_MAX>, TRUCKLOADS_MAX> loadTable;
    EfficientTruckloads();
    int numTrucks(int numCrates, int loadSize);
};

#endif