#include <vector>
#include <iostream>
#include "BubbleSort.h"

using namespace std;

vector<int> BubbleSort::sort(vector<int> list){
    int length = list.size();

    for (int i = 0; i < length; i++){
        for (int j = 0; j < length - 1; j++){
            int left = list.at(j);
            int right = list.at(j+1);

            if (left > right){
                list.at(j) = right;
                list.at(j+1) = left;
            }
            
        }
        
    }
    
    return list;
}