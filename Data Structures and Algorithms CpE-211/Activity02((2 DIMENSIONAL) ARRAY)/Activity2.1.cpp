/*
Activity2.1.cpp

QUESTION:
Write a C++ program that can store 20 numbers in a 2D array.
The program will accept numbers from 1 to 100 only.
The program will then display the numbers in 4 x 5 tabular format.

SAMPLE OUTPUT:

12 13 16 19 25
2  4  10 23 54
27 90 85 81 15
9  55 65 47 80
*/

#include <iostream>
using namespace std;

int main()
{
    int numbers[4][5];

    cout << "Enter 20 numbers from 1 to 100:" << endl;

    // Store 20 numbers in a 4 x 5 array
    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            cout << "Enter number [" << row + 1 << "][" << col + 1 << "]: ";
            cin >> numbers[row][col];

            // Validate input from 1 to 100
            while (numbers[row][col] < 1 || numbers[row][col] > 100)
            {
                cout << "Invalid input! Enter a number from 1 to 100 only: ";
                cin >> numbers[row][col];
            }
        }
    }

    cout << "\nNumbers in 4 x 5 tabular format:" << endl;

    // Display the numbers in 4 x 5 format
    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            cout << numbers[row][col] << "\t";
        }

        cout << endl;
    }

    return 0;
}