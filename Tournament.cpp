#include "Tournament.h"
#include "Referee.h"
#include <iostream>
using namespace std;

Tournament::Tournament()
{
}

Player *Tournament::run(std::array<Player *, 8> competitors)
{
    Referee ref;
    // GROUP STAGE
    std::array<Player *, 4> semifinals; // array to keep track of players which move on to semis
    int n = 0;                          // int to keep track of semifinals array index
    for (int x = 0; x <= 6; x += 2)
    {
        for (int i = 0; i < 5; i++)
        {
            ref.refGame(competitors[x], competitors[x+1]);
        }
        if (competitors[x]->wins > competitors[x+1]->wins || competitors[x]->wins == competitors[x+1]->wins)
        {
            semifinals[n] = competitors[x];
            competitors[x]->print();
        }
        else
        {
            semifinals[n] = competitors[x + 1];
            competitors[x+1]->print();
        }
        competitors[x]->wins = 0;
        competitors[x+1]->wins = 0;
        n++;
    }

    // SEMIFINALS
    for (int i =0; i<4; i++) {
        semifinals[i]->count=0;
    }
    std::array<Player *, 2> finals; // array to keep track of players which move on to semis
    n = 0;                      // int to keep track of finals array index
    for (int x = 0; x <= 2; x += 2)
    {
        for (int i = 0; i < 5; i++)
        {
            ref.refGame(semifinals[x], semifinals[x+1]);
        }
        if (semifinals[x]->wins > semifinals[x+1]->wins || semifinals[x]->wins == semifinals[x+1]->wins)
        {
            finals[n] = semifinals[x];
            semifinals[x]->print();
        }
        else
        {
            finals[n] = semifinals[x + 1];
            semifinals[x+1]->print();
        }
        semifinals[x]->wins = 0;
        semifinals[x+1]->wins = 0;
        n++;
    }

    // FINALS
    finals[0]->count = 0;
    finals[1]->count = 0;
    Player *Winner;
    for (int i = 0; i < 5; i++)
    {
        ref.refGame(finals[0], finals[1]);
    }
    if (finals[0]->wins > finals[1]->wins || finals[0]->wins == finals[1]->wins)
    {
        Winner = finals[0];
    }
    else
    {
        Winner = finals[1];
    }
    return Winner;
}