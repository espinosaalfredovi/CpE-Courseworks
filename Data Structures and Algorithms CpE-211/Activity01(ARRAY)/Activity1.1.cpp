/*
Activity_1.cpp

QUESTION:
Write a C++ program to reverse the numbers of the given sequence.
The program will ask the user how many numbers to enter.
Use array in constructing your codes.
Limit your input up to 30 numbers only.

SAMPLE OUTPUT:

How many numbers to enter: 10

Enter your numbers:
24, 25, 26, 27, 28, 29, 30, 31, 32, 33

Your numbers in reverse:
33, 32, 31, 30, 29, 28, 27, 26, 25, 24
*/

#include <iostream>
using namespace std;

int main()
{
    int numbers[30];
    int size;

    cout << "How many numbers to enter: ";
    cin >> size;

    // Validate the number of inputs
    if (size < 1 || size > 30)
    {
        cout << "Invalid input! Please enter from 1 to 30 numbers only." << endl;
        return 0;
    }

    cout << "\nEnter your numbers:" << endl;

    // Input numbers
    for (int i = 0; i < size; i++)
    {
        cin >> numbers[i];
    }

    cout << "\nYour numbers in reverse:" << endl;

    // Display numbers in reverse order
    for (int i = size - 1; i >= 0; i--)
    {
        cout << numbers[i];

        if (i != 0)
        {
            cout << ", ";
        }
    }

    cout << endl;

    return 0;
}