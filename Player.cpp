#include<iostream>
#include<string.h>
#include"PlayerManagementSystem.cpp"
#include"Player.h"
using namespace std;

Player::Player() {
    this->jersay_no = 0;
    strncpy(this->player_name, "Not Given",15);
    this->runs = 0;
    this->wickets = 0;
    this->matches_played = 0;
}

Player::Player(int jersay_no, char* player_name, int runs, int wickets, int matches_played) {
    this->jersay_no = jersay_no;
    strncpy(this->player_name, player_name,15);
    this->runs = runs;
    this->wickets = wickets;
    this->matches_played = matches_played;
}

int Player::getJerseyNo() const{
    return this->jersay_no;
}

void Player::setJerseyNo(int jersay_no) {
    this->jersay_no = jersay_no;
}

char* Player::getPlayerName() const{
    return this->player_name;
}

void Player::setPlayerName( char* player_name) {
    strcpy(this->player_name, player_name);
}

int Player::getRuns() const{
    return this->runs;
}

void Player::setRuns(int runs) {
    this->runs = runs;
}

int Player::getWickets() const{
    return this->wickets;
}

void Player::setWickets(int wickets) {
    this->wickets = wickets;
}

int Player::getMatchesPlayed() const{
    return this->matches_played;
}

void Player::setMatchesPlayed(int matches_played) {
    this->matches_played = matches_played;
}
