#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>

class Player {
    public:
    Player();
    virtual char makeMove() = 0;
    int count;
    int wins;
    virtual void print() = 0;
};

#endif