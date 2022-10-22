#ifndef CONVERT_H
#define CONVER_H

#include <string>
#include <stack>
#include <queue>

class Convert{
private:
    std::queue<char> operators;
    std::stack<float> operands;
    void processString(std::string input);
public:
    std::string calculatePrefix(std::string input);
    std::string toInfix(std::string input);
};


#endif