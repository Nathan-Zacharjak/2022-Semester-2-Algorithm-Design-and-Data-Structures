#ifndef PLAYER_H
#define PLAYER_H
#include <string>

class Player{
    protected:
    string name;
    
    public:
    Player();
    virtual char makeMove() = 0;
    string getName();
};

#endif