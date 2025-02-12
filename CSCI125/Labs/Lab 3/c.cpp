#include <iostream>
#include <limits>
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
    if (amount < 0)
    {
        cout << "Invalid amount. Deposit failed." << endl;
    }
    else
    {
        balance += amount;
        cout << "$" << amount << " deposited successfully." << endl;
    }
}

void withdrawMoney(double &balance, double amount)
{
    if (balance >= amount)
    {
        balance -= amount;
        cout << "$" << amount << " withdrawn successfully." << endl;
    }
    else
    {
        cout << "Insufficient balance. Withdrawal failed" << endl;
    }
}

void checkBalance(double balance)
{
    cout << "Your current balance is: $" << balance << endl;
}

void processChoice(
    int choice, double &balance)
{
    double amount;

    switch (choice)
    {

    case 1:

        cout << "Enter amount to deposit: $";

        cin >> amount;

        depositMoney(balance, amount);

        break;

    case 2:

        cout << "Enter amount to withdraw: $";

        cin >> amount;

        withdrawMoney(balance, amount);

        break;

    case 3:

        checkBalance(balance);

        break;

    case 4:

        // Exit message
        cout << "Exiting the program. Goodbye! " << endl;

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

        if (cin.fail())
        {
            cin.clear();                                        
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            cout << "Invalid input. Please enter a number." << endl;
            continue; 
        }

        processChoice(choice, balance);

    } while (choice != 4); // 4 = Exit

    return 0;
}