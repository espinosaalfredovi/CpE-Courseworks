/*
ACTIVITY 8.1

Create a program that will ask the user to enter 10 different things
that can be found inside the classroom.

The program will then separate the names alphabetically from (A - M)
and (N - Z).

Then display:
(A - M) in Ascending order
(N - Z) in Descending order

Use QUICK SORT algorithm.

Save as Activity_8.1.cpp

SAMPLE OUTPUT:

Enter Ten Different things you see inside the classroom.

1. Broom
2. PC
3. Ballpen
4. Paper
5. Mouse
6. Keyboard
7. Light
8. Eraser
9. Shoes
10. Sandals

Data from (A - M): Ballpen, Broom, Eraser, Keyboard, Light, Mouse
Data from (N - Z): Sandals, Shoes, PC, Paper
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// Convert first letter to uppercase for comparison
char firstLetter(string word)
{
    return toupper(word[0]);
}

// Quick Sort - Ascending
void quickSortAscending(string arr[], int low, int high)
{
    if (low < high)
    {
        string pivot = arr[high];
        int i = low - 1;

        for (int j = low; j < high; j++)
        {
            if (arr[j] < pivot)
            {
                i++;

                string temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        string temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;

        int partition = i + 1;

        quickSortAscending(arr, low, partition - 1);
        quickSortAscending(arr, partition + 1, high);
    }
}

// Quick Sort - Descending
void quickSortDescending(string arr[], int low, int high)
{
    if (low < high)
    {
        string pivot = arr[high];
        int i = low - 1;

        for (int j = low; j < high; j++)
        {
            if (arr[j] > pivot)
            {
                i++;

                string temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        string temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;

        int partition = i + 1;

        quickSortDescending(arr, low, partition - 1);
        quickSortDescending(arr, partition + 1, high);
    }
}

int main()
{
    string things[10];
    string groupAM[10];
    string groupNZ[10];

    int countAM = 0;
    int countNZ = 0;

    cout << "Enter Ten Different things you see inside the classroom."
         << endl << endl;

    // Input 10 classroom objects
    for (int i = 0; i < 10; i++)
    {
        cout << i + 1 << ". ";
        getline(cin, things[i]);

        char letter = firstLetter(things[i]);

        // A - M
        if (letter >= 'A' && letter <= 'M')
        {
            groupAM[countAM] = things[i];
            countAM++;
        }

        // N - Z
        else if (letter >= 'N' && letter <= 'Z')
        {
            groupNZ[countNZ] = things[i];
            countNZ++;
        }
    }

    // Sort A-M in ascending order
    if (countAM > 0)
    {
        quickSortAscending(groupAM, 0, countAM - 1);
    }

    // Sort N-Z in descending order
    if (countNZ > 0)
    {
        quickSortDescending(groupNZ, 0, countNZ - 1);
    }

    cout << endl;

    cout << "Data from (A - M): ";

    for (int i = 0; i < countAM; i++)
    {
        cout << groupAM[i];

        if (i < countAM - 1)
        {
            cout << ", ";
        }
    }

    cout << endl;

    cout << "Data from (N - Z): ";

    for (int i = 0; i < countNZ; i++)
    {
        cout << groupNZ[i];

        if (i < countNZ - 1)
        {
            cout << ", ";
        }
    }

    cout << endl;

    return 0;
}