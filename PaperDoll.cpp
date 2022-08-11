#include "PaperDoll.h"
#include <array>

using namespace std;

PaperDoll::PaperDoll(){
    moves = {'P','S','S'};
    moveCount = -1;
}

char PaperDoll::makeMove(){
    moveCount++;
    return moves.at(moveCount % 3);
}