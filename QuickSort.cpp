#include <vector>
#include <iostream>
#include "QuickSort.h"

using namespace std;

vector<int> QuickSort::sort(vector<int> list){
    if (list.size() <= 1){
        return list;
    }
    
    int pivotIndex = 2;
    if (list.size() < 3){
        pivotIndex = 0;
    }

    int pivot = list.at(pivotIndex);
    list.erase(list.begin() + pivotIndex);

    vector<int> smallerNums;
    vector<int> largerNums;

    for (int i = 0; i < (int) list.size(); i++){
        int num = list.at(i);

        if (num < pivot){
            smallerNums.push_back(num);
        } else {
            largerNums.push_back(num);
        }
        
    }
    
    smallerNums = sort(smallerNums);
    largerNums = sort(largerNums);

    smallerNums.push_back(pivot);
    smallerNums.insert(smallerNums.end(), largerNums.begin(), largerNums.end());

    return smallerNums;
}