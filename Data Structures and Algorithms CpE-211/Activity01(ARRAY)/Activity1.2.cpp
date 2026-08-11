/*
Activity_2.cpp

QUESTION:
Create a C++ program that will ask the user the age of 10 persons
in the classroom then store it in an array. The program will then
display how many persons are underage and persons with legal age.
Store the ages in an array then display.

SAMPLE OUTPUT:

Enter the age of 10 persons:

1. 24
2. 8
3. 29
4. 14
5. 50
6. 23
7. 16
8. 27
9. 36
10. 12

Students that are below 18 years old are:
8 14 16 12

Students that are of legal age are:
24 29 50 23 27 36
*/

#include <iostream>
using namespace std;

int main()
{
    int ages[10];
    int underage = 0;
    int legalAge = 0;

    cout << "Enter the age of 10 persons:" << endl;
    cout << endl;

    // Input the ages and store them in an array
    for (int i = 0; i < 10; i++)
    {
        cout << i + 1 << ". ";
        cin >> ages[i];
    }

    cout << endl;

    // Display students below 18 years old
    cout << "Students that are below 18 years old are:" << endl;

    for (int i = 0; i < 10; i++)
    {
        if (ages[i] < 18)
        {
            cout << ages[i] << " ";
            underage++;
        }
    }

    cout << endl << endl;

    // Display students with legal age
    cout << "Students that are of legal age are:" << endl;

    for (int i = 0; i < 10; i++)
    {
        if (ages[i] >= 18)
        {
            cout << ages[i] << " ";
            legalAge++;
        }
    }

    cout << endl << endl;

    // Display total count
    cout << "Number of underage persons: " << underage << endl;
    cout << "Number of persons with legal age: " << legalAge << endl;

    return 0;
}