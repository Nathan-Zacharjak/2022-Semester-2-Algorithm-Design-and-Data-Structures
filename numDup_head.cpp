int numDup(int arr[], int start, int size, int element) {
  int dup = 0;
  for (int i=start; i<size; i++) {
    if (arr[i] == element) dup++;
  }
  return dup;
}
