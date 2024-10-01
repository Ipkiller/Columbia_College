#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// random number generator
int getRandomNumber(int min, int max)
{
    return rand() % (max - min + 1) + min;
}

void showRules()
{
    system("cls");
    cout << "Rules of the Game: press any key to  exit" << endl;
    cout << "1. There are 20 sticks in the pile." << endl;
    cout << "2. Each player can pick 1 to 3 sticks at a time." << endl;
    cout << "3. The player who picks the last stick loses." << endl;
    cout << "4. You will be playing against the Computer." << endl;
    cout << "5. Good Luck!" << endl
         << endl;

    cin.ignore(); // clear the input buffer
    cin.get();    // wait for a key press
    // clear the cin value
    cin.clear();
    system("cls");
}

void userTurn(int &sticks)
{
    int userChoice;
    cout << "Your turn!" << endl;
    do
    {
        cout << "Enter number of sticks to pick (1 to 3): ";
        cin >> userChoice;
        if (userChoice < 1 || userChoice > 3)
        {
            cout << "Invalid choice! Please choose between 1 and 3." << endl;
        }
    } while (userChoice < 1 || userChoice > 3);

    sticks -= userChoice;
    system("cls");
    cout << "You picked " << userChoice << "\n"
         << endl;
}

void computerTurn(int &sticks)
{
    int compChoice;
    cout << "Computer's turn!" << endl;

    if (sticks > 4)
        compChoice = getRandomNumber(1, 3);
    else if (sticks > 1)
        compChoice = getRandomNumber(1, sticks - 1);
    else
        compChoice = 1;

    sticks -= compChoice;
    cout << "Computer picked " << compChoice << "\n"
         << endl;
}

const void yesorno()
{
    cout << "Do you want to play again? (y/n): ";
    while (true)
    {
        char playAgain;
        cin >> playAgain;
        if (playAgain == 'y' || playAgain == 'Y')
        {
            system("cls");
            break;
        }
        else if (playAgain == 'n' || playAgain == 'N')
        {
            system("cls");
            cout << "Thanks for playing!" << endl;
            exit(0);
        }
        else
        {
            cout << "Invalid choice! Please choose between 'y' and 'n'." << endl;
        }
    }
}

void sticksverifier(int sticks, int player)
{
    switch (player)
    {
    case 1:
        if (sticks <= 0)
        {
            cout << "You lose! because you picked last stick" << endl;
            yesorno();
        }
        break;

    case 0:
        if (sticks <= 0)
        {
            cout << "Computer loses! because your opponent picked last stick" << endl;
            yesorno();
        }
        break;
    }
}

void playGame()
{
    int sticks = 20;
    bool userStarts = getRandomNumber(0, 1);

    cout << "Game Start! There are 20 sticks." << endl;
    if (userStarts)
    {
        do
        {
            userTurn(sticks);
            sticksverifier(sticks, 1);

            if (sticks <= 0)
                break;

            computerTurn(sticks);
            sticksverifier(sticks, 0);

            if (sticks <= 0)
                break;

        } while (1);
    }
    else
    {
        do
        {
            computerTurn(sticks);
            sticksverifier(sticks, 0);
            if (sticks <= 0)
                break;
            userTurn(sticks);
            sticksverifier(sticks, 1);
            if (sticks <= 0)
                break;
        } while (1);
    }
}

int main()
{
    // Seed the random number generator
    srand(time(0));
    bool isclear = true;

    while (true)
    {
        // Display menu
        if (isclear)
        {
            system("cls");
            isclear = false;
        }
        cout << "Welcome to the Stick Game!" << endl;
        cout << "1. Play Game" << endl;
        cout << "2. Show Rules" << endl;
        cout << "3. Exit" << endl;

        int choice;
        cin >> choice;

        if (choice < 1 || choice > 3)
        {
            system("cls");
            cout << "Invalid choice! Please choose between 1 and 3." << endl;
            continue;
        }

        switch (choice)
        {
        case 1:
            system("cls");
            playGame();
            break;
        case 2:
            system("cls");
            showRules();
            break;
        case 3:
            system("cls");
            cout << "Thanks for playing!" << endl;
            return 0;
        default:
            system("cls");
            cout << "Invalid choice! Please choose between 1 and 3." << endl;
            break;
        }
    }

    return 0;
}
