#include "Convert.h"
#include <string>
#include <stack>
#include <iostream>

using namespace std;

Convert::Convert(){
    operators.push('*');
    operators.push('-');
    operands.push(7);
    operands.push(6);
    operands.push(5);
}

void Convert::processString(std::string input){

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
        char op = operators.top();
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
        char op = operators.top();
        operators.pop();

        if (output.empty()){
            if (operands.empty()){
                break;
            }
            int operand2 = operands.top();
            operands.pop();

            cout << operand2;

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