#include "QuickSort.h"
#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> list = {5,4,3,2,1};
    QuickSort quickSort1;

    list = quickSort1.sort(list);

    cout << "Final list:" << endl;
    for (int i = 0; i < list.size(); i++){
        cout << list.at(i) << endl;
    }

    return 0;
}
