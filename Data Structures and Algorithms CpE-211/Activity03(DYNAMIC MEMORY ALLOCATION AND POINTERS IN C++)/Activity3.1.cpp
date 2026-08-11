/*
Activity3_1.cpp

QUESTION:
Write a C++ program that will ask a user how many numbers to enter.
The program will not accept numbers above 100.
The program will calculate the average of the given numbers by the user,
then display the address of the Average and each number corresponding
to its value.

Store the numbers inside an array then create pointers named:
pt_Ave and pt_numbers

SAMPLE OUTPUT:

How many numbers to enter? 5
Enter number 1: 20
Enter number 2: 21
Enter number 3: 24
Enter number 4: 20
Enter number 5: 20

The average of the 5 numbers is 21
Number 1 address is: 0ff05640
Number 2 address is: 0ff05644
Number 3 address is: 0ff05648
Number 4 address is: 0ff0564c
Number 5 address is: 0ff05650
Average address is: 0ff05674

NOTE:
Memory addresses will be different every time the program runs
or when it is executed on another computer.
*/

#include <iostream>
using namespace std;

int main()
{
    int numbers[100];
    int num;
    double sum = 0;
    double average;

    int *pt_numbers;
    double *pt_Ave;

    cout << "How many numbers to enter? ";
    cin >> num;

    // Check the number of elements
    while (num < 1 || num > 100)
    {
        cout << "Invalid input! Enter from 1 to 100 only: ";
        cin >> num;
    }

    // Enter numbers
    for (int i = 0; i < num; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];

        // Do not accept numbers above 100
        while (numbers[i] > 100)
        {
            cout << "Number must not be above 100." << endl;
            cout << "Enter number " << i + 1 << ": ";
            cin >> numbers[i];
        }

        sum += numbers[i];
    }

    // Calculate average
    average = sum / num;

    // Assign addresses to pointers
    pt_numbers = numbers;
    pt_Ave = &average;

    cout << endl;

    cout << "The average of the " << num
         << " numbers is " << average << endl;

    // Display address of each number
    for (int i = 0; i < num; i++)
    {
        cout << "Number " << i + 1
             << " address is: "
             << (pt_numbers + i) << endl;
    }

    // Display address of average
    cout << "Average address is: " << pt_Ave << endl;

    return 0;
}