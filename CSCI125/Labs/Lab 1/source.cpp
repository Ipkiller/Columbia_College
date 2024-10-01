#include <iostream>
#include <cctype> // for tolower function
using namespace std;

int main()
{
    // getting user input
    char gender;
    char desier;
    int style;
    cout << "Enter the gender (M/F): ";
    cin >> gender;

    // converting to lowercase
    gender = tolower(gender);

    while (1)
    {
        if (gender != 'm' && gender != 'f')
        {
            cout << "Invalid input, please enter M or F" << endl;
            break;
        }

        cout << "For Superhero, enter H" << endl;
        cout << "For Supervillain, enter V" << endl;
        cin >> desier;

        // converting to lowercase
        desier = tolower(desier);
        if (desier != 'h' && desier != 'v')
        {
            cout << "Invalid input, please enter H or V" << endl;
            break;
        }
        else if (desier == 'v')
        {
            cout << "You should get a mohawk" << endl;
            break;
        }

        if (gender == 'm')
        {
            cout << "For Steak, enter 0" << endl;
            cout << "For Sushi, enter 1" << endl;
            cin >> style;

            if (style != 0 && style != 1)
            {
                cout << "Invalid input" << endl;
                break;
            }
            else if (style == 0)
            {
                cout << "You should get a flat top" << endl;
                break;
            }
            else
            {
                cout << "You should get a pompadour" << endl;
                break;
            }
        }
        else
        {
            cout << "For Anime, enter 0" << endl;
            cout << "For Sitcom, enter 1" << endl;
            cin >> style;

            if (style != 0 && style != 1)
            {
                cout << "Invalid input" << endl;
                break;
            }
            else if (style == 0)
            {
                cout << "You should go with bangs" << endl;
                break;
            }
            else
            {
                cout << "You should get a bob" << endl;
                break;
            }
        }
    }

    return 0;
}
