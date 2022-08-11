#ifndef RANDOM_COMPUTER_H
#define RANDOM_COMPUTER_H
#include "Computer.h"

class RandomComputer: public Computer{
    public:
    RandomComputer();
    char makeMove();
};

#endif