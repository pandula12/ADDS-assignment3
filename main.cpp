#include "Computer.h"
#include "Referee.h"
#include "Human.h"
#include "RandomComputer.h"
#include "Avalanche.h"
#include "Bureaucrat.h"
#include "Toolbox.h"
#include "Crescendo.h"
#include "PaperDoll.h"
#include "FistfullODollars.h"
#include "Tournament.h"
#include <iostream>
using namespace std;

int main() {
    Computer comp1;
    RandomComputer randcomp1;
    Human hum1;
    Referee ref1;
    Avalanche ava1;
    Bureaucrat bur1, bur2;
    Toolbox tool1, tool2;
    Crescendo cres1, cres2;
    PaperDoll pap1;
    FistfullODollars ffod1;
    Player* play1 = &ava1;
    Player* play2 = &bur1;
    Player* play3 = &bur2;
    Player* play4 = &tool1;
    Player* play5 = &tool2;
    Player* play6 = &cres1;
    Player* play7 = &cres2;
    Player* play8 = &ffod1;

    Tournament tourney1;

    std::array<Player*, 8> competitors = {play1,play2,play3,play4,play5,play6,play7,play8};
    Player* WINNER = tourney1.run(competitors);
    WINNER->print();
    
    return 0;
}