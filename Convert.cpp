#include "Convert.h"
#include <string>
#include <stack>
#include <queue>
#include <iostream>

using namespace std;

void Convert::processString(string input){
    int size = input.size();
    int currentNumber = 0;
    bool numberFound = false;
    bool negative = false;

    for (int i = 0; i < size; i++){
        char character = input.at(i);

        if (character == '+' || character == '*' || character == '/'){
            operators.push(character);
        } else if (character >= '0' && character <= '9'){
            numberFound = true;
            currentNumber *= 10;
            currentNumber += character - 48;
        } else if (character == '-'){
            negative = true;
        } else if (numberFound){
            if (negative){
                currentNumber = -currentNumber;
            }
            operands.push(currentNumber);

            negative = false;
            numberFound = false;
            currentNumber = 0;
        } else if (negative) {
            operators.push('-');
            negative = false;
            numberFound = false;
            currentNumber = 0;
        }
    }

    if (numberFound){
        if (negative){
            currentNumber = -currentNumber;
        }
        operands.push(currentNumber);
    }
    

    // cout << "Operators:" << endl;
    // for (int i = 0; i < (int)operators.size() + 1; i++)
    // {
    //     cout << operators.top() << endl;
    //     operators.pop();
    // }
    // cout << "Operands:" << endl;
    // for (int i = 0; i < (int)operands.size() + 1; i++)
    // {
    //     cout << operands.top() << endl;
    //     operands.pop();
    // }
    
}

string Convert::calculatePrefix(string input){
    processString(input);
    float result = 0;

    while (!(operators.empty() || operands.empty())){
        int operand1 = operands.top();
        operands.pop();

        if (operands.empty()){
            break;
        }

        int operand2 = operands.top();
        operands.pop();
        char op = operators.front();
        operators.pop();

        switch (op){
        case '+':
            result = operand1 + operand2;
            break;
        case '-':
            result = operand1 - operand2;
            break;
        case '*':
            result = operand1 * operand2;
            break;
        case '/':
            result = (float)operand1 / operand2;
            break;
        
        default:
            result = 0;
            break;
        }

        operands.push(result);
    }

    if (!operands.empty()){
        operands.pop();
    }
    
    if (!(operands.empty() && operators.empty())){
        return "Error";
    }
    
    return to_string(result);
}

string Convert::toInfix(string input){
    processString(input);
    string output;

    while (!(operators.empty() || operands.empty())){
        int operand1 = operands.top();
        operands.pop();
        char op = operators.front();
        operators.pop();

        if (output.empty()){
            if (operands.empty()){
                break;
            }
            int operand2 = operands.top();
            operands.pop();

            output = to_string(operand1) + " " + op + " " + to_string(operand2);
        } else {
            output = "(" + output + ") " + op + " " + to_string(operand1);
        }
    }

    if (!(operands.empty() && operators.empty())){
        return "Error";
    }

    return output;
}