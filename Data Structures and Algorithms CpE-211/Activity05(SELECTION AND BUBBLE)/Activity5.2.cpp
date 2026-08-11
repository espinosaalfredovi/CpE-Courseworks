/*
ACTIVITY 5.2

Create a C++ program that will ask five names of your classmates.
The program will then sort the names of your classmates alphabetically.

Use BUBBLE SORT algorithm in sorting the elements.

Save as Activity5.2.cpp
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string names[5];
    string temp;

    cout << "Enter five names of your classmates:" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter name " << i + 1 << ": ";
        getline(cin, names[i]);
    }

    // Bubble Sort
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            if (names[j] > names[j + 1])
            {
                temp = names[j];
                names[j] = names[j + 1];
                names[j + 1] = temp;
            }
        }
    }

    cout << endl;
    cout << "Names in alphabetical order:" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << i + 1 << ". " << names[i] << endl;
    }

    return 0;
}