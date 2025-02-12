#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;

namespace employeessavitch
{
    class Employee
    {
    public:
        Employee(); // Constructor
        Employee(string the_name, string the_ssn); // Constructor with parameters
        string getName() const;
        string getSSN() const;
        double getNetPay() const;
        void setName(string new_name);
        void setSSN(string new_ssn);
        void setNetPay(double new_net_pay);
        void printCheck() const;
    private:
        string name;
        string ssn;
        double netPay;
    };
}

#endif // EMPLOYEE_H