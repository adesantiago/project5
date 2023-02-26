//
//  League.cpp
//  BaseballTeam
//
//  Created by Alex De Santiago on 7/30/21.
//

#include <stdio.h>
#include "League.h"
using namespace std;

League::League(string name)
{
    mName = name;
}
void League::setName(string name)
{
    mName = name;
}
string League::getName()
{
    return mName;
}
void League::play(BaseballTeam& away, BaseballTeam& home, int awayScore, int homeScore)
{
    if (awayScore > homeScore)
    {
        away.wonAwayGame();
        home.lostHomeGame();
    }
    if (homeScore > awayScore)
    {
        away.lostAwayGame();
        home.wonHomeGame();
    }
}
void League::season(BaseballTeam& team, int homewins, int homelosses, int roadwins, int roadlosses)
{
    team.setHomeWins(homewins);
    team.setHomeLosses(homelosses);
    team.setAwayWins(roadwins);
    team.setAwayLosses(roadlosses);
}
bool League::buttchug(BaseballTeam team1, BaseballTeam team2)
{
    int allwins = team1.getHomeWins() + team1.getAwayWins();
    int alllosses = team1.getAwayLosses() + team1.getHomeLosses();
    int allwins2 = team2.getHomeWins() + team2.getAwayWins();
    int alllosses2 = team2.getHomeLosses() + team2.getAwayLosses();
    if (allwins > allwins2)
        return true;
    else if (allwins2 > allwins)
        return false;
    else
    {
        if (alllosses > alllosses2)
            return false;
        else if (alllosses2 > alllosses)
            return true;
        else return true;
    }
}
BaseballTeam League::pennantWinner(BaseballTeam team1, BaseballTeam team2, BaseballTeam team3, BaseballTeam team4, BaseballTeam team5)
{
    if (this->buttchug(team1, team2) && this->buttchug(team1, team3) && this->buttchug(team1, team4) &&
        this->buttchug(team1, team5))
    {
        return team1;
    }
    else if (this->buttchug(team2, team3) && this->buttchug(team2, team4) && this->buttchug(team2, team5))
    {
        return team2;
    }
    else if (this->buttchug(team3, team4) && this->buttchug(team3, team5))
    {
        return team3;
    }
    else if (this->buttchug(team4, team5))
    {
        return team4;
    }
    else return team5;
}
