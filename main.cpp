#include <iostream>
#include <string>
#include <vector>
#include "Reverse.h"
#include "Truckloads.h"
#include "EfficientTruckloads.h"

using namespace std;

int main(void){
    // Taking input
    string input;
    getline(cin, input);

    vector<string> inputs(4, "");
    int inputIndex = 0;
    int inputSize = input.size();


    // Splitting input on each space input
    for (int i = 0; i < inputSize; i++){
        char inputChar = input.at(i);

        if (inputChar == ' '){
            inputIndex += 1;
        } else {
            inputs.at(inputIndex).push_back(inputChar);
        }
        
    }

    // Processing output
    Reverse reverse1;
    Truckloads truckload1;
    EfficientTruckloads etrucks1;
    
    int reverseDigit = reverse1.reverseDigit(stoi(inputs.at(0)));
    string reverseString = reverse1.reverseString(inputs.at(1));
    int truckload = truckload1.numTrucks(stoi(inputs.at(2)), stoi(inputs.at(3)));
    int efficientTruckload = etrucks1.numTrucks(stoi(inputs.at(2)), stoi(inputs.at(3)));

    // Printing output
    if (reverseDigit == -1){
        cout << "ERROR";
    } else {
        cout << reverseDigit;
    }
    cout << " " << reverseString << " ";
    
    if (truckload == -1){
        cout << "ERROR";
    } else {
        cout << truckload;
    }
    cout << " ";

    if (efficientTruckload == -1){
        cout << "ERROR";
    } else {
        cout << efficientTruckload;
    }
    cout << endl;

    return 0;
}
