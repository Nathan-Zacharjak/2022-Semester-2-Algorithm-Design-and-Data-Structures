#include "EfficientTruckloads.h"
#include <map>
#include <array>
#include <iostream>

using namespace std;


EfficientTruckloads::EfficientTruckloads(){
    
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
    try {
        return loadTable.at(load);
    }
    catch (const std::out_of_range& oor) {
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