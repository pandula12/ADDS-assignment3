#include "Avalanche.h"

Avalanche::Avalanche() : Player() {
    count = 0;
}

char Avalanche::makeMove() {
    return 'R';
}

void Avalanche::print() {
    std::cout<<"Avalanche Wins!"<<std::endl;
}