
class PlayerManagement {
private:
    Player ptr[200];
    int count;

public:
    PlayerManagement();

    void addPlayer();

    void removePlayer();

    void sortByRuns();

    void sortByWickets();
    
    void sortPlayer();

    void updatePlayer();

    void displayInfo();
};