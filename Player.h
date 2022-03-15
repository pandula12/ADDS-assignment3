#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>

class Player {
    public:
    Player();
    virtual char makeMove() = 0;
    int count;
    virtual void print() = 0;
};

#endif