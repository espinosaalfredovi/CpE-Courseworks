/*
Pages 198 - 199
Accessing Structure Members

Leap Year Checker Using Structure
*/

#include <iostream>
using namespace std;

struct leap_year
{
    int year;
};

int main()
{
    leap_year years;

    cout << "\n\n";
    cout << "\tLeap Year Checker Using Structure";
    cout << "\n\n";

    cout << "\tEnter Year : ";
    cin >> years.year;

    cout << "\n";

    if (years.year % 4 == 0)
    {
        if (years.year % 100 == 0)
        {
            if (years.year % 400 == 0)
            {
                cout << "\tThe Given Year "
                     << years.year
                     << " is a Leap Year.";
            }
            else
            {
                cout << "\tThe Given Year "
                     << years.year
                     << " Not a Leap Year.";
            }
        }
        else
        {
            cout << "\tThe Given Year "
                 << years.year
                 << " is a Leap Year.";
        }
    }
    else
    {
        cout << "\tThe Given Year "
             << years.year
             << " Not a Leap Year.";
    }

    cout << "\n\n";
    cout << "\tEND OF PROGRAM";
    cout << "\n\n";

    return 0;
}