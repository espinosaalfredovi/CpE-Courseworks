/*
Write a program in C++ to find the factorial of a number. Use do while loop in constructing
your program. Save as Activity8.2.cpp
*/
#include <iostream>
using namespace std;

int main() {
    int number;
    int i = 1;
    long long factorial = 1;

    cout << "Enter a number: ";
    cin >> number;

    do {
        factorial = factorial * i;
        i++;
    } while (i <= number);

    cout << "Factorial of " << number << " = " << factorial << endl;

    return 0;
}