#include "Referee.h"

Referee::Referee() {
}

char Referee::refGame(Player* player1, Player* player2) {
    char decision = ' ';
    char player1Choice = player1->makeMove();
    char player2Choice = player2->makeMove();
    if (player1Choice == 'R') {
        switch (player2Choice)
        {
        case 'R':
            decision = 'T';
            break;
        case 'P':
            decision = 'L';
            player2->wins++;
            break;
        case 'S':
            decision = 'W';
            player1->wins++;
            break;
        }
    }
     if (player1Choice == 'P') {
        switch (player2Choice)
        {
        case 'P':
            decision =  'T';
            break;
        case 'S':
            decision =  'L';
            player2->wins++;
            break;
        case 'R':
            decision =  'W';
            player1->wins++;
            break;
        }
    }
     if (player1Choice == 'S') {
        switch (player2Choice)
        {
        case 'S':
            decision =  'T';
            break;
        case 'R':
            decision =  'L';
            player2->wins++;
            break;
        case 'P':
            decision =  'W';
            player1->wins++;
            break;
        }
    }
    return decision;
}

