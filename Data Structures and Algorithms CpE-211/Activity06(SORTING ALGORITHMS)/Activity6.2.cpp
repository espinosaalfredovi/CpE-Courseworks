/*
ACTIVITY 6.2 - SORTING ALGORITHMS

Create a C++ program that will ask five names of your classmates.

The program will then sort the names of your classmates alphabetically.

Use INSERTION SORT algorithm in sorting the elements.

Lastly, identify the name/names in the middle of the index.

Save as Activity6.2.cpp
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string names[5];

    cout << "Enter five names of your classmates:" << endl;
    cout << endl;

    // Input five names
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter name " << i + 1 << ": ";
        getline(cin, names[i]);
    }

    // Insertion Sort - Alphabetical Order
    for (int i = 1; i < 5; i++)
    {
        string key = names[i];
        int j = i - 1;

        while (j >= 0 && names[j] > key)
        {
            names[j + 1] = names[j];
            j--;
        }

        names[j + 1] = key;
    }

    cout << endl;
    cout << "Names in alphabetical order:" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << i + 1 << ". " << names[i] << endl;
    }

    // Middle index of 5 elements is index 2
    int middle = 5 / 2;

    cout << endl;
    cout << "Name in the middle index: " << names[middle] << endl;

    return 0;
}