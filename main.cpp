#include <iostream>
#include <array>
#include <string>

#include "Node.h"
#include "LinkedList.h"

using namespace std;

int main(){
    string input;
    getline(cin, input);

    array<int, 100> nums;
    int currentNumber = 0;
    int currentIndex = 0;
    int currentParameterIndex = 0;
    bool numberFound = false;
    bool negative = false;
    bool isParameter = false;
    string command;
    array<int, 2> parameters;

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
            
        // If the current character is a space, push the currently saved number to the array, once
        } else if (numberFound && character == ' ') {
            if (negative) {
                currentNumber = -currentNumber;
            }

            if (isParameter){
                parameters.at(currentParameterIndex) = currentNumber;
                currentParameterIndex++;
            } else {
                nums.at(currentIndex) = currentNumber;
                currentIndex++;
            }
            
            currentNumber = 0;
            numberFound = false;
            negative = false;
        // If the current character is a uppercase letter, add it to the command string
        } else if (character >= 'A' || character <= 'Z') {
            numberFound = false;
            negative = false;
            command.push_back(character);
            // All nums after the string are parameters
            isParameter = true;
        }
    }

    // Have to input to the array again in case the last character is a number
    if (numberFound) {
        if (negative) {
            currentNumber = -currentNumber;
        }
        
        parameters.at(currentParameterIndex) = currentNumber;
    }

    cout << parameters.at(0) << " " << parameters.at(1) << endl;

    // // Processing the command
    LinkedList list(nums, currentIndex);
    if (command == "AF"){
        list.addFront(parameters.at(0));
    } else if (command == "AE"){
        list.addEnd(parameters.at(0));
    } else if (command == "AP"){
        list.addAtPosition(parameters.at(0), parameters.at(1));
    } else if (command == "S"){
        list.search(parameters.at(0));
    } else if (command == "DF"){
        list.deleteFront();
    } else if (command == "DE"){
        list.deleteEnd();
    } else if (command == "DP"){
        list.deletePosition(parameters.at(0));
    } else if (command == "GI"){
        list.getItem(parameters.at(0));
    }

    
    // // Printing result
    list.printItems();

    return 0;
}
