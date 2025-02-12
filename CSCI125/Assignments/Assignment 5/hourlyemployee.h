#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H

#include <string>
#include "employee.h"

using namespace std;
namespace employeessavitch{

class HourlyEmployee : public Employee
{
private:
    double wageRate;
    double hours;
public:
    HourlyEmployee();
    HourlyEmployee(string theName, string theNumber, double theWageRate, double theHours);
    void setRate(double newWageRate);
    double getRate() const;
    void setHours(double hoursWorked);
    double getHours() const;

    void printCheck();
};

}

#endif // HOURLYEMPLOYEE_H