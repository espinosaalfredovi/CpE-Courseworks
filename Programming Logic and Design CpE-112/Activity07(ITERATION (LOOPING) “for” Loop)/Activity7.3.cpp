/*
Design, Write, Compile and Run a C++ program that will ask the user 10 numbers. The
program will then identify how many numbers are odd and how many numbers are even. Save as
Activity7.3.cpp
*/
#include <iostream>
using namespace std;

int main() {
    int number;
    int odd = 0;
    int even = 0;

    cout << "Enter 10 numbers:" << endl;

    for (int i = 1; i <= 10; i++) {
        cout << "Enter number " << i << ": ";
        cin >> number;

        if (number % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    cout << endl;
    cout << "Number of Even Numbers: " << even << endl;
    cout << "Number of Odd Numbers: " << odd << endl;

    return 0;
}