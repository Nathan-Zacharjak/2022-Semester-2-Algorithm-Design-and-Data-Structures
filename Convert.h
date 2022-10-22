#ifndef CONVERT_H
#define CONVER_H

#include <string>
#include <stack>

class Convert{
private:
    std::stack<char> operators;
    std::stack<int> operands;
    void processString(std::string input);
public:
    std::string calculatePrefix(std::string input);
    std::string toInfix(std::string input);
    Convert();
};


#endif