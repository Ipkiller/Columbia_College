#include <iostream>
#include <time.h>
using namespace std;

// Function declarations
void initializeBoard(char board[8][8]);
void placeShips(char board[8][8]);
void printBoard(char board[8][8], bool showShips = false);
char displayCheckerBoard(char value, bool showShips);
bool isHit(char board[8][8], int row, int col);
void playerTurn(char board[8][8], int &NumberOfHits);

int main()
{
    system("clear"); // Clear the console screen

    // Seed the random number generator
    srand(time(0));

    // Declaring the 8x8 board
    char board[8][8];

    // Initialize the board
    initializeBoard(board);

    // Place the ships
    placeShips(board);

    // Print the board
    printBoard(board);

    // Game data
    int NumberOfGuesses = 0;
    int NumberOfHits = 0;

    // Game loop if the player has not guessed 5 times
    while (NumberOfGuesses < 5)
    {
        playerTurn(board, NumberOfHits);
        NumberOfGuesses++;
    }

    cout << endl << "The game is over!" << endl;
    cout << endl;

    // Print the board with ships shown
    printBoard(board, true);

    cout << endl << "You have hit " << NumberOfHits << " ships in " << NumberOfGuesses << " guesses!" << endl;

    return 0;
}

// Function to initialize the board with all water
void initializeBoard(char board[8][8])
{
    for (int row = 0; row < 8; row++)
    {
        for (int col = 0; col < 8; col++)
        {
            board[row][col] = '~';
        }
    }
}

// Function to display the checkerboard
char displayCheckerBoard(char value, bool showShips)
{
    if (showShips)
    {
        return value;
    }

    switch (value)
    {
    case 'S':
        return '~'; // Hide the ship
    }
    return value;
}

// Function to print the board
void printBoard(char board[8][8], bool showShips)
{
    for (int row = -1; row < 8; row++)
    {
        for (int col = 0; col < 8; col++)
        {
            if (row == -1)
            {
                if (col == 0)
                    cout << "   ";
                cout << col + 1 << " | ";
            }
            else
            {
                if (col == 0)
                    cout << row + 1 << "  ";
                const char value = board[row][col];
                cout << displayCheckerBoard(value, showShips) << "   ";
            }
        }
        cout << endl;
    }
}

// Function to check if a hit was made
bool isHit(char board[8][8], int row, int col)
{
    if (board[row - 1][col - 1] == 'S')
    {
        board[row - 1][col - 1] = 'X'; // Mark the hit
        return true;
    }
    return false;
}

// Function to handle the player's turn
void playerTurn(char board[8][8], int &NumberOfHits)
{
    int row, col;
    bool hitResult = false;

    while (true)
    {
        // Input validation for row
        cout << endl << "Enter the row (1-8): ";
        cin >> row;

        if (cin.fail() || row < 1 || row > 8)
        {
            cout << "Invalid input. Please enter a number between 1 and 8." << endl;
            cin.clear();           // Clear the error state
            cin.ignore(256, '\n'); // Ignore the rest of the line
            continue;              // Prompt for row again
        }

        // Input validation for column
        cout << "Enter the column (1-8): ";
        cin >> col;

        if (cin.fail() || col < 1 || col > 8)
        {
            cout << "Invalid input. Please enter a number between 1 and 8." << endl;
            cin.clear();           // Clear the error state
            cin.ignore(256, '\n'); // Ignore the rest of the line
            continue;              // Prompt for column again
        }

        // Check if the position has already been guessed
        if (board[row - 1][col - 1] == 'X' || board[row - 1][col - 1] == 'O')
        {
            cout << "You have already guessed this position! Please try again." << endl;
            continue; // Prompt for row and column again
        }

        break; // Exit the loop if all inputs are valid
    }

    // Check if the guess is a hit
    hitResult = isHit(board, row, col);

    system("clear");                                 // Clear the console screen
    board[row - 1][col - 1] = hitResult ? 'X' : 'O'; // Mark hit or miss
    printBoard(board);                               // Display the board

    if (hitResult)
    {
        cout << endl << "Hit!" << endl;
        NumberOfHits++; // Increment the number of hits
    }
    else
    {
        cout << endl << "Miss!" << endl;
    }
}

// Function to place ships randomly on the board
void placeShips(char board[8][8])
{
    int shipsPlaced = 0; // Counter for ships placed

    while (shipsPlaced < 7)
    {
        int row = rand() % 8; // Random row index between 0 and 7
        int col = rand() % 8; // Random column index between 0 and 7

        // Check if the randomly selected position is water
        if (board[row][col] == '~')
        {
            board[row][col] = 'S'; // Place a ship here
            shipsPlaced++;         // Increment the counter
        }
    }
}