#include <string>
#include "hourlyemployee.h"
#include <iostream>
#include <cstdlib>
using namespace std;

namespace employeessavitch{
    HourlyEmployee::HourlyEmployee() : Employee(), wageRate(0), hours(0)
    {
        // Deliberately empty
    }

    HourlyEmployee::HourlyEmployee(string theName, string theNumber, double theWageRate, double theHours) : Employee(theName, theNumber), wageRate(theWageRate), hours(theHours)
    {
        // Deliberately empty
    }

    void HourlyEmployee::setRate(double newWageRate)
    {
        wageRate = newWageRate;
    }

    double HourlyEmployee::getRate() const
    {
        return wageRate;
    }

    void HourlyEmployee::setHours(double hoursWorked)
    {
        hours = hoursWorked;
    }

    double HourlyEmployee::getHours() const
    {
        return hours;
    }

    void HourlyEmployee::printCheck()
    {
        setNetPay(hours * wageRate);
        cout << "\n________________________________________________\n";
        cout << "Pay to the order of " << getName() << endl;
        cout << "The sum of " << getNetPay() << " Dollars\n";
        cout << "________________________________________________\n";
        cout << "Check Stub: NOT NEGOTIABLE\n";
        cout << "Employee Number: " << getSSN() << endl;
        cout << "Hourly Employee. \nHours worked: " << hours << " Rate: " << wageRate << " Pay: " << getNetPay() << endl;
        cout << "________________________________________________\n";
    }
}