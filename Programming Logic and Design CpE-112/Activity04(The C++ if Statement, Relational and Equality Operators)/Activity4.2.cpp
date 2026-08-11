/*
Design, write, compile and run a program that will ask the user to enter any positive number. The program
will then check the number if it is divisible by 3, 5 and 7 or NOT. Save ACTIVITY4.2.cpp
.*/

#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Enter a positive number: ";

    if (!(cin >> number))
    {
        cout << "Wrong Entry!! It is not a number." << endl;
        return 0;
    }

    if (number <= 0)
    {
        cout << "Enter Positive Numbers Only... Wrong Entry!! Read Instructions.." << endl;

        if (number < 0)
            cout << "The number is a negative number." << endl;

        return 0;
    }

    if (number % 3 == 0)
        cout << "The number is divisible by 3." << endl;
    else
        cout << "The number is not divisible by 3." << endl;

    if (number % 5 == 0)
        cout << "The number is divisible by 5." << endl;
    else
        cout << "The number is not divisible by 5." << endl;

    if (number % 7 == 0)
        cout << "The number is divisible by 7." << endl;
    else
        cout << "The number is not divisible by 7." << endl;

    if (number % 3 == 0 && number % 5 == 0 && number % 7 == 0)
        cout << "Thank You!! The number is divisible by ALL: 3, 5 and 7." << endl;
    else
        cout << "The number is NOT divisible by all of 3, 5 and 7." << endl;

    return 0;
}