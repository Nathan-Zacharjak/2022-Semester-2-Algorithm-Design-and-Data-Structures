#include <iostream>

using namespace std;

int numDup(int arr[], int counter, int size, int element) {
    // Base case
    if (counter > size -1){
        return 0;
    }

    // Recursive case
    int foundElement = 0;
    if (arr[counter] == element){
        foundElement = 1;
    }

    counter++;
    return numDup(arr, counter, size, element) + foundElement;
}

int main(void){
    int arr[5] = {1,2,4,4,5};
    cout << numDup(arr, 2, 5, 4) << endl;

    return 0;
}
