#include <iostream>
#include "hourlyemployee.h"
#include "salariedemployee.h"
#include "manager.h"
using std::cout;
using std::endl;
using namespace employeessavitch;

int main()
{
    HourlyEmployee joe;
    joe.setName("Mighty Joe");
    joe.setSSN("123-45-6789");
    joe.setRate(20.50);
    joe.setHours(40);

    cout << "Check for " << joe.getName() << " for " << joe.getHours() << " hours.\n";
    joe.printCheck();
    cout << endl;

    SalariedEmployee boss("Mr. Big Shot", "987-65-4321", 10500.50);
    cout << "Check for " << boss.getName() << endl;
    boss.printCheck();
    cout << endl;

     // testing all the methods of the Manager class 
    Manager executive("Barbara Winthrop", "987-98-8765", 1500.50, 0);
    executive.setBonus(500.50);
    cout << "Check for " << executive.getName() << " for " << executive.getSalary() << " and bonus of " << executive.getBonus() << endl;
    executive.printCheck();
    cout << endl;




    return 0;
}