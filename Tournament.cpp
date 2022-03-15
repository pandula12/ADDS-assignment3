#include "Tournament.h"
#include "Referee.h"

Tournament::Tournament()
{
}

Player *Tournament::run(std::array<Player *, 8> competitors)
{
    Referee ref;
    char outcome;
    // GROUP STAGE
    std::array<Player *, 4> semifinals; // array to keep track of players which move on to semis
    int n = 0;                          // int to keep track of semifinals array index
    for (int x = 0; x <= 6; x += 2)
    {
        int play1_wins = 0, play2_wins = 0;
        for (int i = 0; i < 5; i++)
        {
            outcome = ref.refGame(competitors[x], competitors[x + 1]);
            if (outcome == 'W')
            {
                play1_wins++;
            }
            else if (outcome == 'L')
            {
                play2_wins++;
            }
        }
        if (play1_wins > play2_wins || play1_wins == play2_wins)
        {
            semifinals[n] = competitors[x];
        }
        else
        {
            semifinals[n] = competitors[x + 1];
        }
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
        int play1_wins = 0, play2_wins = 0;
        for (int i = 0; i < 5; i++)
        {
            outcome = ref.refGame(competitors[x], competitors[x + 1]);
            if (outcome == 'W')
            {
                play1_wins++;
            }
            else if (outcome == 'L')
            {
                play2_wins++;
            }
        }
        competitors[x]->count=0;
        competitors[x+1]->count=0;
        if (play1_wins > play2_wins || play1_wins == play2_wins)
        {
            finals[n] = competitors[x];
        }
        else
        {
            finals[n] = competitors[x + 1];
        }
        n++;
    }

    // FINALS
    finals[0]->count = 0;
    finals[1]->count = 0;
    Player *Winner;
    int play1_wins = 0, play2_wins = 0;
    for (int i = 0; i < 5; i++)
    {
        outcome = ref.refGame(competitors[0], competitors[1]);
        if (outcome == 'W')
        {
            play1_wins++;
        }
        else if (outcome == 'L')
        {
            play2_wins++;
        }
    }
    if (play1_wins > play2_wins || play1_wins == play2_wins)
    {
        Winner = competitors[0];
    }
    else
    {
        Winner = competitors[1];
    }
    return Winner;
}