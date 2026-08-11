/*
ACTIVITY 6.1 - SORTING ALGORITHMS

Create a C++ program that will generate 20 random numbers from 1 to 100
and store it in an array.

The program will then separate the generated numbers that are 50 and
below from the numbers above 50.

Lastly, the program will sort the numbers that are below 50 in ascending
order and descending order for above 50 generated numbers.

Use INSERTION SORT in sorting the elements.

Save as Activity6.1.cpp

SAMPLE OUTPUT:

20 RANDOM GENERATED NUMBERS FROM 1 to 100...

Numbers that are 50 and below: 4 46 5 19 16 27 50 20
Sorted 50 and below: 4 5 16 19 20 27 46 50

Numbers that are above 50:
Sorted above 50: 95 95 93 84 81 80 77 74 70 65 62 56
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int numbers[20];
    int below50[20];
    int above50[20];

    int belowCount = 0;
    int aboveCount = 0;

    srand(time(0));

    // Generate 20 random numbers
    for (int i = 0; i < 20; i++)
    {
        numbers[i] = rand() % 100 + 1;

        if (numbers[i] <= 50)
        {
            below50[belowCount] = numbers[i];
            belowCount++;
        }
        else
        {
            above50[aboveCount] = numbers[i];
            aboveCount++;
        }
    }

    cout << "20 RANDOM GENERATED NUMBERS FROM 1 to 100..." << endl;
    cout << endl;

    cout << "Generated numbers: ";
    for (int i = 0; i < 20; i++)
    {
        cout << numbers[i] << " ";
    }

    cout << endl << endl;

    cout << "Numbers that are 50 and below: ";
    for (int i = 0; i < belowCount; i++)
    {
        cout << below50[i] << " ";
    }

    cout << endl;

    // Insertion Sort - Ascending for 50 and below
    for (int i = 1; i < belowCount; i++)
    {
        int key = below50[i];
        int j = i - 1;

        while (j >= 0 && below50[j] > key)
        {
            below50[j + 1] = below50[j];
            j--;
        }

        below50[j + 1] = key;
    }

    cout << "Sorted 50 and below: ";
    for (int i = 0; i < belowCount; i++)
    {
        cout << below50[i] << " ";
    }

    cout << endl << endl;

    cout << "Numbers that are above 50: ";
    for (int i = 0; i < aboveCount; i++)
    {
        cout << above50[i] << " ";
    }

    cout << endl;

    // Insertion Sort - Descending for above 50
    for (int i = 1; i < aboveCount; i++)
    {
        int key = above50[i];
        int j = i - 1;

        while (j >= 0 && above50[j] < key)
        {
            above50[j + 1] = above50[j];
            j--;
        }

        above50[j + 1] = key;
    }

    cout << "Sorted above 50: ";
    for (int i = 0; i < aboveCount; i++)
    {
        cout << above50[i] << " ";
    }

    cout << endl;

    return 0;
}