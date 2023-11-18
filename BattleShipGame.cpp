#include <iostream>
using namespace std;

int main() {
    // PUT "1" TO INDICATE THERE IS A SHIP.
    bool ships[4][4] = {
        {0, 1, 1, 0},
        {0, 0, 0, 0},
        {0, 0, 1, 0},
        {0, 0, 1, 0}
    };

    // KEEP TRACK OF HOW MANY HITS THE PLAYER HAS AND HOW MANY TURNS THEY HAVE PLAYED IN THESE VARIABLES
    int hits = 0;
    int numberOfTurns = 0;

    // ALLOW THE PLAYER TO KEEP GOING ULTIL THEY HAVE HIT ALL 4 SHIPS:
    while (hits < 4)
    {
        int row, collumn;

        cout << "Selecting coordinates\n";

        // ASK THE PLAYER FOR A ROW:
        cout << "Choose a row number between 0 and 3: ";
        cin >> row;

        // ASK THE PLAYER FOR A COLLUMN:
        cout << "Choose a collumn number between 0 and 3: ";
        cin >> collumn;

        // CHECK IF A SHIP EXISTS IN THOSE COORDIATE:
        if (ships[row][collumn])
        {
            ships[row][collumn] = 0;

            // INCREASE THE HIT COUNTER:
            hits++;

            // TELL THE PLAYER THAT THEY HAVE HIT A SHIP AND HOW MANY SHIPS ARE LEFT:
            cout << "Hit!" << (4-hits) << " left. \n\n";
        } else
        {
            // TELL THE PLAYER THAT THEY ARE MISSED:
            cout << "Miss :( \n\n";
        }
        
        // Count how many turns the player has taken
        numberOfTurns++;
    }
    
    cout << "Victory!" << "\n";
    cout << "You won in" << numberOfTurns << "turns";

    return 0;

}