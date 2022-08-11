#ifndef FISTFULLODOLLARS_H
#define FISTFULLODOLLARS_H
#include "Computer.h"
#include <array>

class FistfullODollars: public Computer{
    private:
    std::array<char,3> moves;
    int lastMove;
    char moveCount;

    public:
    FistfullODollars();
    char makeMove();
};

#endif