#ifndef PAPERDOLL_H
#define PAPERDOLL_H

#include "Player.h"


class PaperDoll : public Player { 
    public:
    PaperDoll();
    char makeMove();
    void print();
};

#endif 