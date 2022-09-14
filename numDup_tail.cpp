// Helper function
int numDup(int arr[], int start, int size, int element, int acc, int counter) {
    // Base case
    if (counter > size){
        return acc;
    }

    // Recursive case
    if (arr[counter] == element){
        acc++;
    }

    counter++;
    return numDup(arr, start, size, element, acc, counter);
}

// Tail recursive numDup function
int numDup(int arr[], int start, int size, int element) {
    return numDup(arr, start, size, element, 0, 0);
}