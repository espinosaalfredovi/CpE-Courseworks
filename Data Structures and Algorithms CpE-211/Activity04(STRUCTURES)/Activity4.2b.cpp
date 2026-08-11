/*
Pages 200 - 201

Program of Structure Access Using Pointer to Member

Year Level Checker Using Structure and Pointers
*/

#include <iostream>
using namespace std;

struct check_year_level
{
    int year_level;
};

int main()
{
    check_year_level *ptr, a;

    ptr = &a;

    cout << "\n\n";
    cout << "\tYear Level Checker Using Structure and Pointers";
    cout << "\n\n";

    cout << "\tEnter Year Level : ";
    cin >> (*ptr).year_level;

    cout << "\n";

    if ((*ptr).year_level == 1)
    {
        cout << "\tYou are belong to Freshmen.";
    }
    else if ((*ptr).year_level == 2)
    {
        cout << "\tYou are belong to Sophomore.";
    }
    else if ((*ptr).year_level == 3)
    {
        cout << "\tYou are belong to Juniors.";
    }
    else if ((*ptr).year_level == 4)
    {
        cout << "\tYou are belong to Seniors.";
    }
    else
    {
        cout << "\tInvalid Option Try Again";
    }

    cout << "\n\n";
    cout << "\tEND OF PROGRAM";
    cout << "\n\n";

    return 0;
}