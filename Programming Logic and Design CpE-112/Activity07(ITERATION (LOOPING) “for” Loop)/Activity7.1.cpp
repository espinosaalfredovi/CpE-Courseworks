/*
Design, Write, Compile and Run a C++ program to enter the starting number and the ending
number. The program will then add all the natural numbers from start to end. Note: The starting
number should be higher than the ending number. Save as Activity7.1.cpp
*/
#include <iostream>
using namespace std;

int main() {
    int start, end;
    int sum = 0;

    cout << "Enter the starting number: ";
    cin >> start;

    cout << "Enter the ending number: ";
    cin >> end;

    if (start <= end) {
        cout << "Invalid input!" << endl;
        cout << "Starting number should be higher than the ending number." << endl;
    } 
    else {
        for (int i = start; i >= end; i--) {
            sum = sum + i;
        }

        cout << "The sum of natural numbers from "
             << start << " to " << end << " is: " << sum << endl;
    }

    return 0;
}