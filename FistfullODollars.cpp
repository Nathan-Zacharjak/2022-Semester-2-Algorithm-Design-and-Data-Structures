#include "FistfullODollars.h"
#include <array>

using namespace std;

FistfullODollars::FistfullODollars(){
    name = "FistfullODollars";
    moves = {'R','P','P'};
    moveCount = -1;
}

char FistfullODollars::makeMove(){
    moveCount++;
    return moves.at(moveCount % 3);
}

void FistfullODollars::setMoveCount(int num){
    moveCount = num;
}