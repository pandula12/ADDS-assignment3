#include "Computer.h"

Computer::Computer() : Player() {
    count = 0;
}

char Computer::makeMove() {
    return 'R';
}

void Computer::print() {
    std::cout<<"Computer Wins!"<<std::endl;
}
