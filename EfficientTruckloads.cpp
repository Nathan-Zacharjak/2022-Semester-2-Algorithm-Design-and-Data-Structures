#include "EfficientTruckloads.h"
#include <vector>
#include <iostream>

#define TRUCKLOADS_MAX 10000

using namespace std;

EfficientTruckloads::EfficientTruckloads(){

}

int EfficientTruckloads::numTrucks(int numCrates, int loadSize){
    static vector<vector<int>> loadTable(TRUCKLOADS_MAX, vector<int>(TRUCKLOADS_MAX, -1));

    // Base case
    if (loadSize >= numCrates){
        loadTable.at(numCrates).at(loadSize) = 1;
        return 1;
    }

    // Recursive case
    if (loadTable.at(numCrates).at(loadSize) != -1) {
        return loadTable.at(numCrates).at(loadSize);
    }else{
        // cout << "loadTable at " << numCrates << ", " << loadSize << " is: ";
            int truck1 = 0;
            int truck2 = 0;
        if (numCrates % 2 == 0){
            truck1 = numTrucks(numCrates/2, loadSize);
            truck2 = numTrucks(numCrates/2, loadSize);
            // cout << truck1 + truck2 << endl;

            loadTable.at(numCrates).at(loadSize) = truck1 + truck2;
            return truck1 + truck2;
        }else{
            truck1 = numTrucks(numCrates/2 + 1, loadSize);
            truck2 = numTrucks(numCrates/2, loadSize);
            // cout << truck1 + truck2 << endl;
            
            loadTable.at(numCrates).at(loadSize) = truck1 + truck2;
            return truck1 + truck2;
        }
    }
}