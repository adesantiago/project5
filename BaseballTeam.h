//
//  BaseballTeam.h
//  BaseballTeam
//
//  Created by Alex De Santiago on 7/30/21.
//
#include <string>
#ifndef BaseballTeam_h
#define BaseballTeam_h
class BaseballTeam
{
private:
    std::string mName;
    int mHomeWins, mHomeLosses;
    int mRoadWins, mRoadLosses;
public:
    BaseballTeam();
    BaseballTeam(std::string name);
    void setName(std::string name);
    std::string getName();
    int getHomeWins();
    void setHomeWins(int wins);
    int getHomeLosses();
    void setHomeLosses(int losses);
    int getAwayWins();
    void setAwayWins(int wins);
    int getAwayLosses();
    void setAwayLosses(int losses);
    void wonHomeGame();
    void lostHomeGame();
    void wonAwayGame();
    void lostAwayGame();
    void clear();
    bool hasWinningRecord();
    bool hasWinningRoadRecord();
    bool hasWinningHomeRecord();
    std::string overallRecord();
    
};

#endif /* BaseballTeam_h */
