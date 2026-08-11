/*
Activity2.2.cpp

QUESTION:
Create a C++ program that will store the numbers:

10, 12, 14, 16, 18,
20, 55, 75, 65, 85,
95, 200, 150, 65, 34,
90, 91, 87, 60, 63,
23, 19, 11, 34, 54

The program will then ask the user what row and column
he would like to display. The program will then display
the value in the array.

SAMPLE OUTPUT:

These are the numbers in the table:

10  12  14  16  18
20  55  75  65  85
95  200 150 65  34
90  91  87  60  63
23  19  11  34  54

Enter row value: 1
Enter column value: 2

The number in row[1] column[2] is: 12
*/

#include <iostream>
using namespace std;

int main()
{
    int numbers[5][5] = {
        {10, 12, 14, 16, 18},
        {20, 55, 75, 65, 85},
        {95, 200, 150, 65, 34},
        {90, 91, 87, 60, 63},
        {23, 19, 11, 34, 54}
    };

    int row, column;

    cout << "These are the numbers in the table:" << endl;
    cout << endl;

    // Display the 5 x 5 array
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << numbers[i][j] << "\t";
        }
        cout << endl;
    }

    cout << endl;

    cout << "Enter row value: ";
    cin >> row;

    cout << "Enter column value: ";
    cin >> column;

    // Check if row and column are valid
    if (row >= 1 && row <= 5 && column >= 1 && column <= 5)
    {
        cout << "The number in row[" << row
             << "] column[" << column << "] is: "
             << numbers[row - 1][column - 1] << endl;
    }
    else
    {
        cout << "Invalid row or column!" << endl;
        cout << "Please enter values from 1 to 5 only." << endl;
    }

    return 0;
}