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