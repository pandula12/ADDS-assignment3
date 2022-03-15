#include "Human.h"
#include <iostream>

Human::Human() : Player() {
    count = 0;
}

char Human::makeMove() {
    char choice;
    std::cout<<"Enter move: ";
    std::cin>>choice;
    return choice;
}

void Human::print() {
    std::cout<<"Human Wins!"<<std::endl;
}

