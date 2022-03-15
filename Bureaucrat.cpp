#include "Bureaucrat.h"

Bureaucrat::Bureaucrat() : Player() {
    count = 0;
}

char Bureaucrat::makeMove() {
    return 'P';
}

void Bureaucrat::print() {
    std::cout<<"Bureaucrat Wins!"<<std::endl;
}