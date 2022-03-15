#include "FistfullODollars.h"

FistfullODollars::FistfullODollars() : Player() {
    count = 0;
}

char FistfullODollars::makeMove() {
    char moves[3] = {'R','P','P'};
    char move;
    if (count < 3) {
        move = moves[count];
        count++;
    }
    else {
        count = 0;
        move = moves[count];
    }
    return move;
}

void FistfullODollars::print() {
    std::cout<<"FistfillODollars Wins!"<<std::endl;
}