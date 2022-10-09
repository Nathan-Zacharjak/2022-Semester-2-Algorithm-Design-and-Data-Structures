#include <vector>
#include <iostream>
#include "BubbleSort.h"

using namespace std;

vector<int> BubbleSort::sort(vector<int> list){
    for (int i = 0; i < (int) list.size(); i++){
        for (int j = 0; j < (int) list.size() - 1; j++){
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