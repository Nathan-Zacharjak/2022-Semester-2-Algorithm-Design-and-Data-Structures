#ifndef PLAYER_H
#define PLAYER_H
#include <string>

class Player{
    protected:
    std::string name;
    
    public:
    Player();
    virtual char makeMove() = 0;
    std::string getName();
};

#endif