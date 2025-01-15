#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function to roll the dice (returns a number between 1 and 6)
int rollDice() {
    return (rand() % 6) + 1; // Random number from 1 to 6
}

int main() {
    srand(time(0)); // Seed for random number generation
    
    cout << "Welcome to the Ludo Game!" << endl;
    cout << "Roll the dice to start! Press 'Enter' to roll..." << endl;

    // Variables
    int diceRoll;
    char choice;
    int position = 0; // Track the user's current position

    while (true) {
        cout << "\nPress 'r' to roll the dice or 'q' to quit: ";
        cin >> choice;

        if (choice == 'q') {
            cout << "Game Over! Thanks for playing." << endl;
            break;
        } 
        else if (choice == 'r') {
            diceRoll = rollDice(); // Roll the dice using the function
            cout << "You rolled: " << diceRoll << endl;

            // Game logic using if-else
            if (diceRoll == 6) {
                cout << "Congrats! You rolled a 6. You can start or roll again!" << endl;
                position += 1; // Move forward 1 step
                cout << "Your position: " << position << endl;
            } 
            else if (diceRoll >= 1 && diceRoll <= 5) {
                position += diceRoll; // Move forward by the dice value
                cout << "You move forward " << diceRoll << " steps." << endl;
                cout << "Your position: " << position << endl;
            }

            // Win condition
            if (position >= 30) { 
                cout << "\nCongratulations! You reached the finish line and won the game!" << endl;
                break;
            }
        } 
        else {
            cout << "Invalid input. Please enter 'r' to roll or 'q' to quit." << endl;
        }
    }

    return 0;
}
