#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    // Constructors
    BankAccount() : accountNumber(0), balance(0.0) {}
    BankAccount(int accNum, double bal = 0.0) : accountNumber(accNum), balance(bal) {}

    // Getters and Setters
    int getAccountNumber() const { return accountNumber; }
    double getBalance() const { return balance; }
    void setAccountNumber(int accNum) { accountNumber = accNum; }
    void setBalance(double bal) { balance = bal; }

    // Deposit function
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited $" << amount << " into account " << accountNumber << endl;
        } else {
            cout << "Invalid deposit amount.\n";
        }
    }

    // Withdraw function
    bool withdraw(double amount) {
        if (amount > 0 && balance >= amount) {
            balance -= amount;
            cout << "Withdrew $" << amount << " from account " << accountNumber << endl;
            return true;
        } else {
            cout << "Insufficient balance or invalid amount.\n";
            return false;
        }
    }

    // Friend function for balance transfer
    friend bool transfer(BankAccount &from, BankAccount &to, double amount);

    // Operator overloading for + (deposit)
    BankAccount& operator+(double amount) {
        deposit(amount);
        return *this;
    }

    // Operator overloading for - (withdrawal)
    BankAccount& operator-(double amount) {
        withdraw(amount);
        return *this;
    }

    // Operator overloading for == and != (compare balance)
    bool operator==(const BankAccount &other) const {
        return balance == other.balance;
    }
    bool operator!=(const BankAccount &other) const {
        return !(*this == other);
    }

    // Overloading << for output
    friend ostream& operator<<(ostream &out, const BankAccount &acc) {
        out << "Account Number: " << acc.accountNumber << ", Balance: $" << acc.balance;
        return out;
    }

    // Overloading >> for input
    friend istream& operator>>(istream &in, BankAccount &acc) {
        cout << "Enter account number: ";
        in >> acc.accountNumber;
        cout << "Enter balance: ";
        in >> acc.balance;
        return in;
    }
};

// Friend function definition for transferring balance
bool transfer(BankAccount &from, BankAccount &to, double amount) {
    if (from.balance >= amount && amount > 0) {
        from.balance -= amount;
        to.balance += amount;
        cout << "Transferred $" << amount << " from account " << from.accountNumber << " to account " << to.accountNumber << endl;
        return true;
    } else {
        cout << "Transfer failed due to insufficient balance or invalid amount.\n";
        return false;
    }
}

// Main function for testing
int main() {
    // Create two accounts
    BankAccount account1(1001, 500.0);
    BankAccount account2(1002, 300.0);

    // Test input operator >>
    cout << "Enter details for a new account:\n";
    BankAccount account3;
    cin >> account3;

    // Test output operator <<
    cout << "\nAccount details:\n";
    cout << account1 << endl;
    cout << account2 << endl;
    cout << account3 << endl;

    // Test deposit and overloaded + operator
    account1 + 200.0;
    cout << account1 << endl;

    // Test withdrawal and overloaded - operator
    account2 - 100.0;
    cout << account2 << endl;

    // Test transfer function
    transfer(account1, account2, 150.0);

    // Test comparison operators
    if (account1 == account2) {
        cout << "Account1 and Account2 have the same balance.\n";
    } else {
        cout << "Account1 and Account2 have different balances.\n";
    }

    return 0;
}
