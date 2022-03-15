#include "Referee.h"

Referee::Referee() {
}

char Referee::refGame(Player* player1, Player* player2) {
    char decision = ' ';
    char playerChoice = player1->makeMove();
    char computerChoice = player2->makeMove();
    if (playerChoice == 'R') {
        switch (computerChoice)
        {
        case 'R':
            decision = 'T';
            break;
        case 'P':
            decision = 'L';
            break;
        case 'S':
            decision = 'W';
            break;
        }
    }
     if (playerChoice == 'P') {
        switch (computerChoice)
        {
        case 'P':
            decision =  'T';
            break;
        case 'S':
            decision =  'L';
            break;
        case 'R':
            decision =  'W';
            break;
        }
    }
     if (playerChoice == 'S') {
        switch (computerChoice)
        {
        case 'S':
            decision =  'T';
            break;
        case 'R':
            decision =  'L';
            break;
        case 'P':
            decision =  'W';
            break;
        }
    }
    return decision;
}

