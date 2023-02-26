//
//  League.h
//  BaseballTeam
//
//  Created by Alex De Santiago on 7/30/21.
//
#include "BaseballTeam.h"
#ifndef League_h
#define League_h
class League
{
private:
    std::string mName;
public:
    League(std::string name);
    void setName(std::string name);
    std::string getName();
    void play(BaseballTeam& away, BaseballTeam& home, int awayScore, int homeScore);
    void season(BaseballTeam& team, int homewins, int homelosses, int roadwins, int roadlosses);
    BaseballTeam pennantWinner(BaseballTeam team1, BaseballTeam team2, BaseballTeam team3, BaseballTeam team4, BaseballTeam team5);
    bool buttchug(BaseballTeam team1, BaseballTeam team2);
};

#endif /* League_h */
