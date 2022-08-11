#ifndef TOURNAMENT_H
#define TOURNAMENT_H
#include "Player.h"
#include <array>

class Tournament{
    private:

    public:
    Tournament();
    Player* run(array<Player*, 8> competitors);
};

#endif