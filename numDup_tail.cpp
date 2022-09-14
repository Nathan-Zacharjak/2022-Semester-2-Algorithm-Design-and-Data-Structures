// Helper function
int numDup(int arr[], int counter, int size, int element, int acc) {
    // Base case
    if (counter > size -1){
        return acc;
    }

    // Recursive case
    if (arr[counter] == element){
        acc++;
    }

    counter++;
    return numDup(arr, counter, size, element, acc);
}

// Tail recursive numDup function
int numDup(int arr[], int start, int size, int element) {
    return numDup(arr, start, size, element, 0);
}