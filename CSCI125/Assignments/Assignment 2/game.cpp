#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <sstream>

using namespace std;

int rollDice();
void playerTurn(int &money, int &wager, bool &bust, int &total, ofstream &logfile);
void houseTurn(int &houseTotal, bool &houseBust, ofstream &logfile);
void logToFile(ofstream &logfile, const string &message);
string intToString(int value);

int main() {
    srand(static_cast<unsigned int>(time(0)));

    int money = 500;
    int wager;
    bool bust = false, houseBust = false;
    int playerTotal = 0, houseTotal = 0;
    char choice;
    ofstream logfile("blackjack_log.txt");

    cout << "Welcome to Blackjack!\n";
    logfile << "Welcome to Blackjack!\n";

    do {
        cout << "You have $" << money << ". Enter wager: ";
        cin >> wager;

        while (wager <= 0 || wager > money) {
            cout << "Invalid wager! Enter a positive amount no more than your balance: ";
            cin >> wager;
        }
        
        playerTurn(money, wager, bust, playerTotal, logfile);
        if (bust) {
            cout << "You busted! You lose $" << wager << ".\n";
            logfile << "Player busted! Lost $" << wager << ".\n";
        } else {
            houseTurn(houseTotal, houseBust, logfile);
            if (houseBust) {
                cout << "The house busted! You win $" << wager * 2 << ".\n";
                logfile << "House busted! Player wins $" << wager * 2 << ".\n";
                money += wager * 2;
            } else {
                cout << "Your total: " << playerTotal << ", House total: " << houseTotal << "\n";
                logfile << "Player total: " << playerTotal << ", House total: " << houseTotal << "\n";
                if (playerTotal > houseTotal) {
                    cout << "You win! You win $" << wager * 2 << ".\n";
                    logfile << "Player wins $" << wager * 2 << ".\n";
                    money += wager * 2;
                } else if (playerTotal < houseTotal) {
                    cout << "You lose! House wins.\n";
                    logfile << "House wins.\n";
                } else {
                    cout << "It's a tie! You get your wager back.\n";
                    logfile << "It's a tie.\n";
                    money += wager;
                }
            }
        }

        cout << "Do you want to play again? (y/n): ";
        cin >> choice;
        logfile << "Player chose to " << (choice == 'y' ? "continue.\n" : "quit.\n");

    } while (choice == 'y' && money > 0);

    if (money <= 0) {
        cout << "You're out of money! Game over.\n";
        logfile << "Player is out of money. Game over.\n";
    } else {
        cout << "Thanks for playing! You leave with $" << money << ".\n";
        logfile << "Player left with $" << money << ".\n";
    }

    logfile.close();
    return 0;
}

int rollDice() {
    int roll = rand() % 13 + 2;
    if (roll > 10) return 10;
    return roll;
}

void playerTurn(int &money, int &wager, bool &bust, int &total, ofstream &logfile) {
    total = 0;
    bust = false;
    int roll1 = rollDice();
    int roll2 = rollDice();
    total = roll1 + roll2;
    
    cout << "You rolled: " << roll1 << " and " << roll2 << ". Total: " << total << "\n";
    logToFile(logfile, "Player rolled: " + intToString(roll1) + " and " + intToString(roll2) + ". Total: " + intToString(total));
    
    if (total == 22) {
        cout << "Blackjack! You stand.\n";
        logToFile(logfile, "Player hit Blackjack with two aces.");
        return;
    }

    char choice;
    while (total < 21) {
        cout << "Do you want to hit or stand? (h/s): ";
        cin >> choice;
        if (choice == 'h') {
            int newRoll = rollDice();
            total += newRoll;
            cout << "You rolled: " << newRoll << ". Total: " << total << "\n";
            logToFile(logfile, "Player hits and rolls: " + intToString(newRoll) + ". Total: " + intToString(total));
        } else if (choice == 's') {
            break;
        }
    }

    if (total > 21) {
        bust = true;
        money -= wager;
    }
}

void houseTurn(int &houseTotal, bool &houseBust, ofstream &logfile) {
    houseTotal = 0;
    houseBust = false;
    houseTotal += rollDice();
    
    while (houseTotal < 17) {
        int newRoll = rollDice();
        houseTotal += newRoll;
        cout << "House hits and rolls: " << newRoll << ". Total: " << houseTotal << "\n";
        logToFile(logfile, "House hits and rolls: " + intToString(newRoll) + ". Total: " + intToString(houseTotal));
    }

    if (houseTotal > 21) {
        houseBust = true;
    }
}

void logToFile(ofstream &logfile, const string &message) {
    logfile << message << "\n";
}

string intToString(int value) {
    ostringstream oss;
    oss << value;
    return oss.str();
}
