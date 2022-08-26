#include "EfficientTruckloads.h"
#include <vector>
#include <iostream>

#define TRUCKLOADS_MAX 10001

using namespace std;

EfficientTruckloads::EfficientTruckloads(){

}

int EfficientTruckloads::numTrucks(int numCrates, int loadSize){
    // Initialise all possible input values of truckloads to -1
    static vector<vector<int>> loadTable(TRUCKLOADS_MAX, vector<int>(TRUCKLOADS_MAX, -1));

    // If there are no crates to load, it takes 0 trucks to take the load
    if (numCrates == 0){
        return 0;
    }
    
    // If the loadSize of the trucks is 0, it would take an infinite number of trucks (mathematically),
    // so just return -1 to mark an error occurred
    if (loadSize == 0){
        return -1;
    }
    

    // cout << "Calling numCrates: " << numCrates << " and loadSize: " << loadSize << endl;

    // Base case
    if (loadSize >= numCrates){
        // cout << "Base case, returning 1" << endl;
        loadTable.at(numCrates).at(loadSize) = 1;
        return 1;
    }

    // Recursive case
    if (loadTable.at(numCrates).at(loadSize) != -1) {
        // cout << "loadTable at " << numCrates << ", " << loadSize << " is: " << loadTable.at(numCrates).at(loadSize) << endl;
        return loadTable.at(numCrates).at(loadSize);
    }else{
            int truck1 = 0;
            int truck2 = 0;
        if (numCrates % 2 == 0){
            truck1 = numTrucks(numCrates/2, loadSize);
            truck2 = numTrucks(numCrates/2, loadSize);

            loadTable.at(numCrates).at(loadSize) = truck1 + truck2;
            return truck1 + truck2;
        }else{
            truck1 = numTrucks(numCrates/2 + 1, loadSize);
            truck2 = numTrucks(numCrates/2, loadSize);
            
            loadTable.at(numCrates).at(loadSize) = truck1 + truck2;
            return truck1 + truck2;
        }
    }
}