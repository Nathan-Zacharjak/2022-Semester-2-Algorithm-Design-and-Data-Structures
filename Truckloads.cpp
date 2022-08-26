#include "Truckloads.h"

using namespace std;

Truckloads::Truckloads(){

}

int Truckloads::numTrucks(int numCrates, int loadSize){
    // If there are no crates to load, it takes 0 trucks to take the load
    if (numCrates == 0){
        return 0;
    }
    
    // If the loadSize of the trucks is 0, it would take an infinite number of trucks (mathematically),
    // so just return -1 to mark an error occurred
    if (loadSize == 0){
        return -1;
    }
    
    if (loadSize >= numCrates){
        return 1;
    }

    if (numCrates % 2 == 0){
        return numTrucks(numCrates/2, loadSize) + numTrucks(numCrates/2, loadSize);
    }else{
        return numTrucks((numCrates/2) + 1, loadSize) + numTrucks(numCrates/2, loadSize);
    }
}