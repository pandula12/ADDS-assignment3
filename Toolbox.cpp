#include "Toolbox.h"

Toolbox::Toolbox() : Player() {
    count = 0;
}

char Toolbox::makeMove() {
    return 'S';
}

void Toolbox::print() {
    std::cout<<"Toolbox Wins!"<<std::endl;
}