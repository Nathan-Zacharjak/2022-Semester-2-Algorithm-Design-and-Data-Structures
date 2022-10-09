#include <vector>
#include "RecursiveBinarySearch.h"

using namespace std;

bool RecursiveBinarySearch::search(vector<int> list, int num){
    if (list.size() <= 0){
        return false;
    }

    int middleIndex = list.size() / 2;
    int middle = list.at(middleIndex);

    if (middle == num){
        return true;
    } else if (list.size() <= 1){
        return false;
    }

    if (middle > num){
        list.erase(list.begin() + middleIndex, list.end());
    } else if (middle < num){
        list.erase(list.begin(), list.begin() + middleIndex);
    }

    return search(list, num);
}