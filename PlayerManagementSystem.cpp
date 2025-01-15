#include<iostream>
#include<string.h>
#include"PlayerManagementSystem.h"
using namespace std;

PlayerManagement::PlayerManagement() {
    count = 0;
}

void PlayerManagement::addPlayer() {
    int jn, rn, wt, mt;
    char name[30];

    cout << "\nEnter the Player Jersey Number: ";
    cin >> jn;
    cout << "Enter the Player Name: ";
    cin >> name;
    cout << "Enter the Player Runs: ";
    cin >> rn;
    cout << "Enter the Player Wickets: ";
    cin >> wt;
    cout << "Enter the Player Matches Played: ";
    cin >> mt;

    ptr[count] = Player(jn, name, rn, wt, mt);
    count++;
    cout << "Player Added Successfully!" << endl;
}

void PlayerManagement::removePlayer() {
    int jersey_no;
    cout << "\nEnter the Jersey Number of the player to remove: ";
    cin >> jersey_no;

    for (int i = 0; i < count; i++) {
        if (ptr[i].getJerseyNo() == jersey_no) {
            for (int j = i; j < count - 1; j++) {
                ptr[j] = ptr[j + 1]; 
            }
            count--;
            cout << "Player with Jersey No " << jersey_no << " has been removed successfully!" << endl;
            return;
        }
    }
    cout << "Player with Jersey No " << jersey_no << " not found!" << endl;
}

void PlayerManagement::sortByRuns() {
    for(int i=0;i<count-1;i++){
    	for(int j=0;j<count-i-1;j++){
    		if(ptr[j].getRuns()>ptr[j+1].getRuns()){
    			Player temp = ptr[j];
	            ptr[j] = ptr[j+1];
	            ptr[j+1] = temp;
			}
		}
	}
    cout << "Players sorted by Runs successfully!" << endl;
}

void PlayerManagement::sortByWickets() {
    for(int i=0;i<count-1;i++){
    	for(int j=0;j<count-i-1;j++){
    		if(ptr[j].getWickets()>ptr[j+1].getWickets()){
    			Player temp = ptr[j];
	            ptr[j] = ptr[j+1];
	            ptr[j+1] = temp;
			}
		}
	}
    cout << "Players sorted by Wickets successfully!" << endl;
}

void PlayerManagement::sortPlayer(){
	int ch;
	cout<<"1.Sort By Runs\n2.Sort By Wickets"<<endl;
	cin>>ch;
	switch(ch){
		case 1:
			sortByRuns();
			break;
		case 2:
			sortByWickets();
			break;
	}
}

void PlayerManagement::updatePlayer() {
    int jersey_no;
    cout << "\nEnter the Jersey Number of the player to update: ";
    cin >> jersey_no;

    for (int i = 0; i < count; i++) {
        if (ptr[i].getJerseyNo() == jersey_no) {
            int new_runs, new_wickets, new_matches;
            char new_name[30];

            cout << "Enter new Player Name: ";
            cin >> new_name;
            cout << "Enter new Runs: ";
            cin >> new_runs;
            cout << "Enter new Wickets: ";
            cin >> new_wickets;
            cout << "Enter new Matches Played: ";
            cin >> new_matches;

            ptr[i].setPlayerName(new_name);
            ptr[i].setRuns(new_runs);
            ptr[i].setWickets(new_wickets);
            ptr[i].setMatchesPlayed(new_matches);
            cout << "Player updated successfully!" << endl;
            return;
        }
    }
    cout << "Player with Jersey No " << jersey_no << " not found!" << endl;
}

void PlayerManagement::displayInfo() {
    if (count == 0) {
        cout << "No players available to display." << endl;
        return;
    }
    else {
    	for(int i=0;i<count;i++){
    		cout << "Jersey No: " << ptr[i].getJerseyNo() << endl;
		    cout << "Player Name: " << ptr[i].getPlayerName() << endl;
		    cout << "Runs: " << ptr[i].getRuns() << endl;
		    cout << "Wickets: " << ptr[i].getWickets() << endl;
		    cout << "Matches Played: " << ptr[i].getMatchesPlayed() << endl;
		    cout << "-----------------------------" << endl;
		}
   }
}