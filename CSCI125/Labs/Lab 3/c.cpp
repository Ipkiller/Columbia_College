#include <iostream>
using namespace std;

// function declaration
void displayMenu()
{

    cout << "\n--- Bank Account Menu---\n";

    cout << "1. Deposit Money\n";

    cout << "2. Withdraw Money\n";

    cout << "3. Check Balance\n";

    cout << "4. Exit\n";
}

void depositMoney(double &balance, double amount)
{
    balance += amount;
}

void withdrawMoney(double &balance, double amount)
{
    balance -= amount;
}

void checkBalance(double balance)
{
    cout << "Your balance is: " << balance << endl;
}

void processChoice(
    int choice, double &balance)
{
    double amount;

    switch (choice)
    {

    case 1:

        cout << "Enter amount to deposit: ";

        cin >> amount;

        depositMoney(balance, amount);

        break;

    case 2:

        cout << "Enter amount to withdraw: ";

        cin >> amount;

        withdrawMoney(balance, amount);

        break;

    case 3:

        checkBalance(balance);

        break;

    case 4:

        cout << "Exiting the program...\n";

        break;

    default:

        cout << "Invalid choice\n";
    }
}

int main()
{

    double balance = 0.0;

    int choice;

    do
    {

        displayMenu();

        cout << "Enter your choice: ";

        cin >> choice;

        processChoice(choice, balance);

    } while (choice != 4); // 4 = Exit

    // Exit message
    cout << "Exit" << endl;

    return 0;
}