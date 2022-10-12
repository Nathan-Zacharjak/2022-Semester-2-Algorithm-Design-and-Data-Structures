#include <iostream>
#include <vector>
#include <string>

#include "Node.h"
#include "LinkedList.h"

using namespace std;

int main(){
    string input;
    getline(cin, input);

    vector<int> nums;
    int currentNumber = 0;
    bool numberFound = false;
    bool negative = false;

    // Going through one character at a time from the input string
    for (int i = 0; i < (int) input.size(); i++){
        char character = input.at(i);

        if (character == '-'){
            negative = true;
        // If the current character is a number, add it to the current number
        } else if (character >= '0' && character <= '9'){
            // 48 is 0 in ascii,
            // so this will convert all characters in the input into numbers
            currentNumber = currentNumber * 10;
            currentNumber = currentNumber + input.at(i) - '0';
            numberFound = true;
            
        // If the current character is not a number, push the currently saved number to the vector, once
        } else if (numberFound) {
            if (negative) {
                currentNumber = -currentNumber;
            }
            nums.push_back(currentNumber);
            currentNumber = 0;
            numberFound = false;
            negative = false;
        // If the current character isn't a number, we aren't looking at a negative number
        } else {
            negative = false;
        }
    }
    // Have to input to the vector again in case the last character is a number
    if (numberFound) {
        if (negative) {
            currentNumber = -currentNumber;
        }
        nums.push_back(currentNumber);
    }

    // Sorting the input and finding 1
    QuickSort qsort;
    nums = qsort.sort(nums);
    RecursiveBinarySearch rsearch;
    bool found1 = rsearch.search(nums, 1);
    
    // Printing result
    if (found1){
        cout << "true";
    } else {
        cout << "false";
    }
    for (int i = 0; i < (int) nums.size(); i++){
        cout << " " << nums.at(i);
    }
    cout << endl;

    return 0;
}
