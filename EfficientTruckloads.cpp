#include "EfficientTruckloads.h"
#include <map>
#include <array>
#include <iostream>

using namespace std;

#define TRUCKLOADS_MAX 10000

EfficientTruckloads::EfficientTruckloads(){
    // Initialise all possible input values of truckloads to -1
    for (int i = 0; i < TRUCKLOADS_MAX; i++){
        for (int j = 0; i < TRUCKLOADS_MAX; i++){
            array<int,2> arr = {i,j};
            loadTable.at(arr) = -1;
        }
        
    }
    
}

int EfficientTruckloads::numTrucks(int numCrates, int loadSize){
    array<int,2> load;
    load.at(1) = numCrates;
    load.at(2) = loadSize;

    // Base case
    if (loadSize >= numCrates){
        loadTable.at(load) = 1;
        return 1;
    }

    // Recursive case
    if (loadTable.at(load) != -1) {
        return loadTable.at(load);
    }else{
        cout << "loadTable at " << numCrates << ", " << loadSize << " is: ";
            int truck1 = 0;
            int truck2 = 0;
        if (numCrates % 2 == 0){
            truck1 = numTrucks(numCrates/2, loadSize);
            truck2 = numTrucks(numCrates/2, loadSize);
            cout << truck1 + truck2 << endl;

            loadTable.at(load) = truck1 + truck2;
            return truck1 + truck2;
        }else{
            truck1 = numTrucks(numCrates/2 + 1, loadSize);
            truck2 = numTrucks(numCrates/2, loadSize);
            cout << truck1 + truck2 << endl;
            
            loadTable.at(load) = truck1 + truck2;
            return truck1 + truck2;
        }
    }
}