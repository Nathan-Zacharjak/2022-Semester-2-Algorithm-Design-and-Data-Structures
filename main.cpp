#include <iostream>
#include <string>

#include "Convert.h"

using namespace std;

int main(){
    Convert convert1;
    // string input;
    // getline(cin, input);

    cout << convert1.toInfix("input") << endl;



    // array<int, 100> nums;
    // int currentNumber = 0;
    // int currentIndex = 0;
    // int currentParameterIndex = 0;
    // bool numberFound = false;
    // bool negative = false;
    // bool isParameter = false;
    // string command;
    // array<int, 2> parameters;

    // // Going through one character at a time from the input string
    // for (int i = 0; i < (int) input.size(); i++){
    //     char character = input.at(i);

    //     if (character == '-'){
    //         negative = true;
    //     // If the current character is a number, add it to the current number
    //     } else if (character >= '0' && character <= '9'){
    //         // 48 is 0 in ascii,
    //         // so this will convert all characters in the input into numbers
    //         currentNumber = currentNumber * 10;
    //         currentNumber = currentNumber + input.at(i) - '0';
    //         numberFound = true;
            
    //     // If the current character is a space, push the currently saved number to the array, once
    //     } else if (numberFound && character == ' ') {
    //         if (negative) {
    //             currentNumber = -currentNumber;
    //         }

    //         if (isParameter){
    //             parameters.at(currentParameterIndex) = currentNumber;
    //             currentParameterIndex++;
    //         } else {
    //             nums.at(currentIndex) = currentNumber;
    //             currentIndex++;
    //         }
            
    //         currentNumber = 0;
    //         numberFound = false;
    //         negative = false;
    //     // If the current character is a uppercase letter, add it to the command string
    //     } else if (character >= 'A' || character <= 'Z') {
    //         numberFound = false;
    //         negative = false;
    //         command.push_back(character);
    //         // All nums after the string are parameters
    //         isParameter = true;
    //     }
    // }

    // // Have to input to the array again in case the last character is a number
    // if (numberFound) {
    //     if (negative) {
    //         currentNumber = -currentNumber;
    //     }
        
    //     parameters.at(currentParameterIndex) = currentNumber;
    // }

    // // Processing the command
    // // Removing the last whitespace character from the command
    // command.erase(command.end() - 1);
    // LinkedList list(nums, currentIndex);

    // if (command.compare("AF") == 0){
    //     list.addFront(parameters.at(0));
    // } else if (command.compare("AE") == 0){
    //     list.addEnd(parameters.at(0) == 0);
    // } else if (command.compare("AP") == 0){
    //     list.addAtPosition(parameters.at(0), parameters.at(1));
    // } else if (command.compare("S") == 0){
    //     list.search(parameters.at(0));
    // } else if (command.compare("DF") == 0){
    //     list.deleteFront();
    // } else if (command.compare("DE") == 0){
    //     list.deleteEnd();
    // } else if (command.compare("DP") == 0){
    //     list.deletePosition(parameters.at(0));
    // } else if (command.compare("GI") == 0){
    //     list.getItem(parameters.at(0));
    // }

    // // Printing result
    // list.printItems();

    return 0;
}
