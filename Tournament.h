#ifndef TOURNAMENT_H
#define TOURNAMENT_H
#include "Player.h"
#include <array>
#include "Referee.h"

class Tournament{
    private:
    Referee ref;
    Player* winner;
    int ply1Wins;
    int ply2Wins;
    char gameResult;
    Player* ply1;
    Player* ply2;
    std::array<Player*,4> winners;

    Player* RunRound(Player* ply1, Player* ply2);

    public:
    Tournament();
    Player* run(std::array<Player*, 8> competitors);
};

#endif