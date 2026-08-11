/* 
Design, write, compile and run a program that will ask the user to enter a number. The program will then
specify if the number entered is an odd or even number. Create a Flow Chart then Save ACTIVITY4.1.cpp
*/

#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Enter a number: ";

    if (!(cin >> number))
    {
        cout << "It is not a number." << endl;
    }
    else if (number % 2 == 0)
    {
        cout << "The number is an even number." << endl;
    }
    else
    {
        cout << "The number is an odd number." << endl;
    }

    return 0;
}