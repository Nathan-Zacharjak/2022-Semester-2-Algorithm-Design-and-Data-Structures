#include "Crescendo.h"
#include <array>

using namespace std;

Crescendo::Crescendo(){
    name = "Crescendo";
    moves = {'P','S','R'};
    moveCount = -1;
}

char Crescendo::makeMove(){
    moveCount++;
    return moves.at(moveCount % 3);
}

void Crescendo::setMoveCount(int num){
    moveCount = num;
}