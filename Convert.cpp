#include "Convert.h"
#include <string>
#include <stack>
#include <queue>
#include <iostream>

using namespace std;

void Convert::processString(string input){
    int currentNumber = 0;
    int order = 1;
    bool numberFound = false;

    while (!input.empty()){
        char character = input.back();
        input.pop_back();

        if (character == '+' || character == '*' || character == '/'){
            operators.push(character);
        } else if (character >= '0' && character <= '9'){
            numberFound = true;
            currentNumber += (character - 48) * order;
            order *= 10;
        } else if (character == '-'){
            if (numberFound){
                operands.push(-currentNumber);
            } else {
                operators.push(character);
            }
            order = 1;
            numberFound = false;
            currentNumber = 0;
        } else if (numberFound){
            operands.push(currentNumber);
            order = 1;
            numberFound = false;
            currentNumber = 0;
        }
    }

    if (numberFound){
        operands.push(currentNumber);
    }
    
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
            if (operand2 == 0){
                return "Error";
            }
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