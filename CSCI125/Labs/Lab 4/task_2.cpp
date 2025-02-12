#include <fstream>
#include <iostream>
#include <cstdlib>
#include <string>

int main()
{
    using namespace std;
    ifstream inStream;
    ofstream outStream;

    inStream.open("in.dat");
    if (inStream.fail())
    {
        cout << "Input file opening failed.\n";
        exit(1);
    }

    outStream.open("out.dat");
    if (outStream.fail())
    {
        cout << "Output file opening failed.\n";
        exit(1);
    }

    string number = "";
    int sum = 0;
    char ch;
    while (inStream.get(ch))
    {
        if (isdigit(ch))
        {
            number += ch;
        }
        else if (ch == ',' || inStream.eof())
        {
            if (!number.empty())
            {
                sum += stoi(number);
                outStream << number << "\n";
                number = "";
            }
        }
    }

    if (!number.empty())
    {
        sum += stoi(number);
        outStream << number << "\n";
    }

    outStream << "The sum of the numbers is: " << sum << "\n";

    inStream.close();
    outStream.close();

    return 0;
}