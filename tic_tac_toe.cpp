#include <iostream>
using namespace std;

int main() {
    // Initialize variables for the game
    int repetition = 0; // Keeps track of the number of turns
    int indexR, indexC; // Indices for the row and column where a player wants to place their symbol
    char myFirstArray[3][3] = {
        {'_', '_', '_'}, // 3x3 grid initialized with empty spaces
        {'_', '_', '_'},
        {'_', '_', '_'}
    };

    cout << "Tic tac toe game" << endl;

    // Main game loop
    do {
        // Display the current game board
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << " " << myFirstArray[i][j] << " ";
            }
            cout << endl;
        }

        // Check if it's player 1's turn
        if (repetition % 2 == 0) {
            cout << "Turn of player one" << endl;
            cout << "Enter index where you want to enter (o)" << endl;
            cin >> indexR >> indexC;
            myFirstArray[indexR][indexC] = 'o'; // Place 'o' at the specified position
        }

        // Check if it's player 2's turn
        if (repetition % 2 == 1) {
            cout << "Turn of player two" << endl;
            cout << "Enter index where you want to enter (x)" << endl;
            cin >> indexR >> indexC;
            myFirstArray[indexR][indexC] = 'x'; // Place 'x' at the specified position
        }

        // Increment the repetition counter to switch turns
        repetition++;
    } while (repetition < 9); // Continue until 9 turns have been played

    return 0;
}