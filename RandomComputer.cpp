#include "RandomComputer.h"
#include <cstdlib>
#include <ctime>

RandomComputer::RandomComputer() : Player() {
    count = 0;
}

char RandomComputer::makeMove() {
    char moves[3] = {'R','P','S'};
    srand(time(0));
    int choose = rand() % 3;
    return moves[choose];
}

void RandomComputer::print() {
    std::cout<<"RandomComputer Wins!"<<std::endl;
}