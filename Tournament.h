#ifndef TOURNAMENT_H
#define TORUNAMENT_H
#include "Player.h"
#include <array>

class Tournament {
    public:
    Tournament();
    Player* run(std::array<Player*, 8> competitors );
};


#endif