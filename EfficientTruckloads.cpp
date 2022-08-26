#include "EfficientTruckloads.h"
#include <array>
#include <iostream>

using namespace std;

EfficientTruckloads::EfficientTruckloads(){
    // Initialise all possible input values of truckloads to -1
    for (int i = 0; i < TRUCKLOADS_MAX; i++){
        for (int j = 0; j < TRUCKLOADS_MAX; j++){
            loadTable.at(i).at(j) = -1;
        }
        
    }
    
}

int EfficientTruckloads::numTrucks(int numCrates, int loadSize){
    // Base case
    if (loadSize >= numCrates){
        loadTable.at(numCrates).at(loadSize) = 1;
        return 1;
    }

    // Recursive case
    if (loadTable.at(numCrates).at(loadSize) != -1) {
        return loadTable.at(numCrates).at(loadSize);
    }else{
        cout << "loadTable at " << numCrates << ", " << loadSize << " is: ";
            int truck1 = 0;
            int truck2 = 0;
        if (numCrates % 2 == 0){
            truck1 = numTrucks(numCrates/2, loadSize);
            truck2 = numTrucks(numCrates/2, loadSize);
            cout << truck1 + truck2 << endl;

            loadTable.at(numCrates).at(loadSize) = truck1 + truck2;
            return truck1 + truck2;
        }else{
            truck1 = numTrucks(numCrates/2 + 1, loadSize);
            truck2 = numTrucks(numCrates/2, loadSize);
            cout << truck1 + truck2 << endl;
            
            loadTable.at(numCrates).at(loadSize) = truck1 + truck2;
            return truck1 + truck2;
        }
    }
}