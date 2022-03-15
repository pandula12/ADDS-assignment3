#include "PaperDoll.h"

PaperDoll::PaperDoll() : Player() {
    count = 0;
}

char PaperDoll::makeMove() {
    char moves[3] = {'P','S','S'};
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

void PaperDoll::print() {
    std::cout<<"PaperDoll Wins!"<<std::endl;
}