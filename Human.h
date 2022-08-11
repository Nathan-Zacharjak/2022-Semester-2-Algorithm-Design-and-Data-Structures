#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"

class Human: public Player{   
    private:
    char move;
    
    public:
    Human();
    char makeMove();
};

#endif