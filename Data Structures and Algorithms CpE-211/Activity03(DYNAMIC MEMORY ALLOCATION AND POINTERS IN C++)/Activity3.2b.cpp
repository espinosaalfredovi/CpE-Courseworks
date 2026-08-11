/*
Activity3_3.cpp

QUESTION:
Modify the program written in Exercise 2a to use a while statement.

The program stores the following numbers in the array named rates:

6.25, 6.50, 6.8, 7.2, 7.35, 7.5, 7.65,
7.8, 8.2, 8.4, 8.6, 8.8, and 9.0

Display the values in the array by changing the address
in a pointer called dispPt.

Use a while statement in the program.
*/

#include <iostream>
using namespace std;

int main()
{
    double rates[13] = {
        6.25, 6.50, 6.8, 7.2, 7.35, 7.5, 7.65,
        7.8, 8.2, 8.4, 8.6, 8.8, 9.0
    };

    double *dispPt;
    int i = 0;

    dispPt = rates;

    cout << "Values stored in the rates array:" << endl;
    cout << endl;

    while (i < 13)
    {
        cout << "rates[" << i << "] = " << *dispPt << endl;

        dispPt++;
        i++;
    }

    return 0;
}