#include "PaperDoll.h"
#include <array>

using namespace std;

PaperDoll::PaperDoll(){
    name = "PaperDoll";
    moves = {'P','S','S'};
    moveCount = -1;
}

char PaperDoll::makeMove(){
    moveCount++;
    return moves.at(moveCount % 3);
}

void PaperDoll::setMoveCount(int num){
    moveCount = num;
}