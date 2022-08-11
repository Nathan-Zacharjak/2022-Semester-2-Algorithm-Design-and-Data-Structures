#include "Crescendo.h"
#include <array>

using namespace std;

Crescendo::Crescendo(){
    moves = {'P','S','R'};
    moveCount = -1;
}

char Crescendo::makeMove(){
    moveCount++;
    return moves.at(moveCount % 3);
}