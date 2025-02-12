#include <iostream>
#include <string>
#include "employee.h"
#include "cstdlib"
using namespace std;

namespace employeessavitch
{
    Employee::Employee() : name("No name yet"), ssn("No number yet"), netPay(0)
    {
        // Deliberately empty
    }

    Employee::Employee(string theName, string theNumber) : name(theName), ssn(theNumber), netPay(0)
    {
        // Deliberately empty
    }

    string Employee::getName() const
    {
        return name;
    }

    string Employee::getSSN() const
    {
        return ssn;
    }

    double Employee::getNetPay() const
    {
        return netPay;
    }

    void Employee::setName(string newName)
    {
        name = newName;
    }

    void Employee::setSSN(string newSSN)
    {
        ssn = newSSN;
    }

    void Employee::setNetPay(double newNetPay)
    {
        netPay = newNetPay;
    }

    void Employee::printCheck() const
    {
        cout << "\nERROR: printCheck FUNCTION CALLED FOR AN \n"
             << "UNDIFFERENTIATED EMPLOYEE. Aborting the program.\n"
             << "Check with the author of the program about this bug.\n";
        exit(1);
    } // employeessavitch
}