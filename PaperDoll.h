#ifndef PAPERDOLL_H
#define PAPERDOLL_H
#include "Computer.h"
#include <array>

class PaperDoll: public Computer{
    private:
    std::array<char,3> moves;
    int lastMove;
    char moveCount;

    public:
    PaperDoll();
    char makeMove();
};

#endif