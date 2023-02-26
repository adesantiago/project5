//
//  BaseballTeam.cpp
//  BaseballTeam
//
//  Created by Alex De Santiago on 7/30/21.
//

#include <stdio.h>
#include "BaseballTeam.h"
using namespace std;

BaseballTeam::BaseballTeam()
{
    mName = "";
    mHomeWins = 0;
    mHomeLosses = 0;
    mRoadLosses = 0;
    mRoadWins = 0;
}
BaseballTeam::BaseballTeam(string name)
{
    mName = name;
    mHomeWins = 0;
    mHomeLosses = 0;
    mRoadLosses = 0;
    mRoadWins = 0;
}
void BaseballTeam::setName(string name)
{
    mName = name;
}
string BaseballTeam::getName()
{
    return mName;
}
int BaseballTeam::getHomeWins()
{
    return mHomeWins;
}
void BaseballTeam::setHomeWins(int wins)
{
    mHomeWins = wins;
}
int BaseballTeam::getHomeLosses()
{
    return mHomeLosses;
}
void BaseballTeam::setHomeLosses(int losses)
{
    mHomeLosses = losses;
}
int BaseballTeam::getAwayWins()
{
    return mRoadWins;
}
void BaseballTeam::setAwayWins(int wins)
{
    mRoadWins = wins;
}
int BaseballTeam::getAwayLosses()
{
    return mRoadLosses;
}
void BaseballTeam::setAwayLosses(int losses)
{
    mRoadLosses = losses;
}
void BaseballTeam::wonHomeGame()
{
    mHomeWins = mHomeWins + 1;
}
void BaseballTeam::lostHomeGame()
{
    mHomeLosses = mHomeLosses + 1;
}
void BaseballTeam::wonAwayGame()
{
    mRoadWins = mRoadWins + 1;
}
void BaseballTeam::lostAwayGame()
{
    mRoadLosses = mRoadLosses + 1;
}
void BaseballTeam::clear()
{
    mHomeWins = 0;
    mHomeLosses = 0;
    mRoadLosses = 0;
    mRoadWins = 0;
}
bool BaseballTeam::hasWinningRecord()
{
    int allwins = mHomeWins + mRoadWins;
    int alllosses = mHomeLosses + mRoadLosses;
    if  (allwins >= alllosses)
        return true;
    else return false;
}
bool BaseballTeam::hasWinningRoadRecord()
{
    if (mRoadWins >= mRoadLosses)
        return true;
    else return false;
}
bool BaseballTeam::hasWinningHomeRecord()
{
    if (mHomeWins >= mHomeLosses)
        return true;
    else return false;
}
string BaseballTeam::overallRecord()
{
    int allwins = mHomeWins + mRoadWins;
    int alllosses = mHomeLosses + mRoadLosses;
    string charallwins = to_string(allwins);
    string charalllosses = to_string(alllosses);
    if (charallwins.length() == 1)
    {
        charallwins = "00" + charallwins;
    }
    else if (charallwins.length() == 2)
    {
        charallwins = "0" + charallwins;
    }
    if (charalllosses.length() == 1)
    {
        charalllosses = "00" + charalllosses;
    }
    else if (charalllosses.length() == 2)
    {
        charalllosses = "0" + charalllosses;
    }
    string orecord = charallwins + "-" + charalllosses;
    return orecord;
}
