#include "Computer.h"
#include "Human.h"
#include "Referee.h"
#include "RandomComputer.h"
#include "Avalanche.h"
#include "Bureaucrat.h"
#include "Toolbox.h"
#include "Crescendo.h"
#include "PaperDoll.h"
#include "FistfullODollars.h"
#include <iostream>

int main() {
    Computer comp1;
    RandomComputer randcomp1;
    Human hum1;
    Referee ref1;
    Avalanche ava1;
    Bureaucrat bur1;
    Toolbox tool1;
    Crescendo cres1;
    PaperDoll pap1;
    FistfullODollars ffod1;
    Player* play1 = &comp1;
    Player* play2 = &randcomp1;
    Player* play3 = &hum1;
    Player* play4 = &ava1;
    Player* play5 = &bur1;
    Player* play6 = &tool1;
    Player* play7 = &cres1;
    Player* play8 = &pap1;
    Player* play9 = &ffod1;
    std::cout<<"Computer output: "<<comp1.makeMove()<<"\n\n";
    std::cout<<"RandomComputer output: "<<randcomp1.makeMove()<<"\n\n";
    std::cout<<"Avalanche output: "<<ava1.makeMove()<<"\n\n";
    std::cout<<"Bureaucrat output: "<<bur1.makeMove()<<"\n\n";
    std::cout<<"Toolbox output: "<<tool1.makeMove()<<"\n\n";
    std::cout<<"Crescendo output 1: "<<cres1.makeMove()<<std::endl;
    std::cout<<"Crescendo output 2: "<<cres1.makeMove()<<std::endl;
    std::cout<<"Crescendo output 3: "<<cres1.makeMove()<<std::endl;
    std::cout<<"Crescendo output 4: "<<cres1.makeMove()<<"\n\n";
    std::cout<<"PaperDoll output 1: "<<pap1.makeMove()<<std::endl;
    std::cout<<"PaperDoll output 2: "<<pap1.makeMove()<<std::endl;
    std::cout<<"PaperDoll output 3: "<<pap1.makeMove()<<std::endl;
    std::cout<<"PaperDoll output 4: "<<pap1.makeMove()<<"\n\n";
    std::cout<<"FistfullODollars output 1: "<<ffod1.makeMove()<<std::endl;
    std::cout<<"FistfullODollars output 2: "<<ffod1.makeMove()<<std::endl;
    std::cout<<"FistfullODollars output 3: "<<ffod1.makeMove()<<std::endl;
    std::cout<<"FistfullODollars output 4: "<<ffod1.makeMove()<<"\n\n";
    std::cout<<"Player vs Computer round: "<<"\n\n";
    std::cout<<ref1.refGame(play3, play1)<<"\n\n";
    std::cout<<"Player vs Random Computer round: "<<"\n\n";
    std::cout<<ref1.refGame(play3, play2)<<"\n\n";
    std::cout<<"Player vs Avalanche Computer round: "<<"\n\n";
    std::cout<<ref1.refGame(play3, play4)<<"\n\n";
    std::cout<<"Player vs Bureaucrat Computer round: "<<"\n\n";
    std::cout<<ref1.refGame(play3, play5)<<"\n\n";
    std::cout<<"Player vs Toolbox Computer round: "<<"\n\n";
    std::cout<<ref1.refGame(play3, play6)<<"\n\n";
    std::cout<<"Player vs Crescendo Computer round: "<<"\n\n";
    std::cout<<ref1.refGame(play3, play7)<<"\n\n";
    std::cout<<"Player vs Paperdoll Computer round: "<<"\n\n";
    std::cout<<ref1.refGame(play3, play8)<<"\n\n";
    std::cout<<"Player vs FistfullODollars Computer round: "<<"\n\n";
    std::cout<<ref1.refGame(play3, play9)<<"\n\n";
    return 0;
}