#include <iostream>
#include <string>
#include "salariedemployee.h"
using namespace std;

namespace employeessavitch{
    SalariedEmployee::SalariedEmployee() : Employee(), salary(0)
    {
        // Deliberately empty
    }

    SalariedEmployee::SalariedEmployee(string theName, string theNumber, double theWeeklySalary) : Employee(theName, theNumber), salary(theWeeklySalary)
    {
        // Deliberately empty
    }

    void SalariedEmployee::setSalary(double newSalary)
    {
        salary = newSalary;
    }

    double SalariedEmployee::getSalary() const
    {
        return salary;
    }

    void SalariedEmployee::printCheck()
    {
        setNetPay(salary);
        cout << "\n________________________________________________\n";
        cout << "Pay to the order of " << getName() << endl;
        cout << "The sum of " << getNetPay() << " Dollars\n";
        cout << "________________________________________________\n";
        cout << "Check Stub: NOT NEGOTIABLE\n";
        cout << "Employee Number: " << getSSN() << endl;
        cout << "Salaried Employee. Regular Pay: " << salary << endl;
        cout << "________________________________________________\n";
    }
}