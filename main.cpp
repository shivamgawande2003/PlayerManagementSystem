#include<iostream>
#include"Player.h"
#include"PlayerManagementSystem.h"
using namespace std;

int main() {
    PlayerManagement management;
    int choice;

    while (true) {
        cout << "\n==== Player Management System ====\n";
	    cout << "1. Add Player\n";
	    cout << "2. Remove Player\n";
	    cout << "3. Sort Players\n";
	    cout << "4. Update Player\n";
	    cout << "5. Display Players Info\n";
	    cout << "6. Exit\n";
	    cout << "====================================\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                management.addPlayer();
                break;
            case 2:
                management.removePlayer();
                break;
            case 3:
                management.sortPlayer();
                break;
            case 4:
                management.updatePlayer();
                break;
            case 5:
                management.displayInfo();
                break;
            case 6:
                cout << "Exiting the system." << endl;
                return 0;
            default:
                cout << "Invalid choice! Please Enter Valid Choice." << endl;
        }
    }
}
