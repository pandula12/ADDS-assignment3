#include "Crescendo.h"

Crescendo::Crescendo() : Player() {
    count = 0;
}

char Crescendo::makeMove() {
    char moves[3] = {'P','S','R'};
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

void Crescendo::print() {
    std::cout<<"Crescendo Wins!"<<std::endl;
}