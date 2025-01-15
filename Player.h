#pragma once

class Player {
private:
    int jersay_no;
    char player_name[30];
    int runs;
    int wickets;
    int matches_played;

public:
    Player();

    Player(int jersay_no, char* player_name, int runs, int wickets, int matches_played); 
    
    int getJerseyNo();

    void setJerseyNo(int jersay_no);

    char* getPlayerName();

    void setPlayerName( char* player_name);

    int getRuns();
    
    void setRuns(int runs); 
    
    int getWickets();

    void setWickets(int wickets);

    int getMatchesPlayed();

    void setMatchesPlayed(int matches_played); 

};