#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H

#include <string>
#include "employee.h"

using namespace std;

namespace employeessavitch
{
    class SalariedEmployee : public Employee
    {
    private:
        double salary; // Weekly
    public:
        SalariedEmployee();
        SalariedEmployee(string theName, string theNumber, double theWeeklySalary);
        void setSalary(double newSalary);
        double getSalary() const;
        void printCheck();
    };
}

#endif // SALARIEDEMPLOYEE_H