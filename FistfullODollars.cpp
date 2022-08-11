#include "FistfullODollars.h"
#include <array>

using namespace std;

FistfullODollars::FistfullODollars(){
    moves = {'R','P','P'};
    moveCount = -1;
}

char FistfullODollars::makeMove(){
    moveCount++;
    return moves.at(moveCount % 3);
}