#ifndef CRESCENDO_H
#define CRESCENDO_H
#include "Computer.h"
#include <array>

class Crescendo: public Computer{
    private:
    std::array<char,3> moves;
    int lastMove;
    char moveCount;

    public:
    Crescendo();
    char makeMove();
    void setMoveCount(int moveCount);
};

#endif