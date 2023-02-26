//
//  main.cpp
//  BaseballTeam
//
//  Created by Alex De Santiago on 7/30/21.
//

#include <iostream>
    #include <string>
    #include <cassert>

        #include "BaseballTeam.h"
        #include "League.h"

    using namespace std;

    int main()
    {
           // sample test code
           BaseballTeam team( "123-" );
           assert( team.getName( ) == "123-" );
           assert( team.overallRecord( ) == "000-000" );
           assert( team.hasWinningRecord( ) );
           assert( team.hasWinningRoadRecord( ) );
           assert( team.hasWinningHomeRecord( ) );

           team.wonHomeGame( );
           team.wonHomeGame();

           assert( team.overallRecord( ) == "002-000" );
           assert( team.hasWinningRecord( ) );
           assert( team.hasWinningRoadRecord( ) );
           assert( team.hasWinningHomeRecord( ) );

           team.clear( );
           assert( team.overallRecord( ) == "000-000" );

           League league( "Your League" );
           assert( league.getName() == "Your League" );
           league.season( team, 15, 10, 10, 15 );
           assert( team.overallRecord( ) == "025-025" );
           assert( team.hasWinningRecord( ) );
           assert( !team.hasWinningRoadRecord( ) );
           assert( team.hasWinningHomeRecord( ) );

           cout << "yUHHHH you did it!" << endl;

           return 0;
        }
