#ifndef MANAGER_H
#define MANAGER_H

#include <string>
#include "employee.h"

using namespace std;

namespace employeessavitch
{
    class Manager : public Employee
    {
    private:
        double salary; // Weekly
        double bonus;
    public:
        Manager();
        Manager(string theName, string theNumber, double theWeeklySalary, double theBonus);
        void setSalary(double newSalary);
        double getSalary() const;
        void setBonus(double newBonus);
        double getBonus() const;
        void printCheck();
    };
}

#endif // MANAGER_H