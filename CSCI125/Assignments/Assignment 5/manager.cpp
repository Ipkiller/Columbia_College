#include <iostream>
#include <string>
#include "manager.h"
#include "cstdlib"
using namespace std;


namespace employeessavitch{
    Manager::Manager() : Employee(), salary(0), bonus(0)
    {
        // Deliberately empty
    }

    Manager::Manager(string theName, string theNumber, double theWeeklySalary,double theBonus) : Employee(theName, theNumber), salary(theWeeklySalary), bonus(theBonus)
    {
        // Deliberately empty
    }

    void Manager::setSalary(double newSalary)
    {
        salary = newSalary;
    }

    double Manager::getSalary() const
    {
        return salary;
    }

    void Manager::setBonus(double newBonus)
    {
        bonus = newBonus;
    }

    double Manager::getBonus() const
    {
        return bonus;
    }

    void Manager::printCheck()
    {
        setNetPay(salary + bonus);
        cout << "\n________________________________________________\n";
        cout << "Pay to the order of " << getName() << endl;
        cout << "The sum of " << getNetPay() << " Dollars\n";
        cout << "________________________________________________\n";
        cout << "Check Stub: NOT NEGOTIABLE\n";
        cout << "Employee Number: " << getSSN() << endl;
        cout << "Manager. Regular Pay: " << salary << endl;
        cout << "Manager. Bonus: " << bonus << endl;
        cout << "________________________________________________\n";
    }
}
