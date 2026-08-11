/*
Write a program in C++ to find the Greatest Common Divisor (GCD) of two numbers. Use
while loop in constructing your program. Save as Activity8.3.cpp
*/
#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    int a = num1;
    int b = num2;

    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }

    cout << "GCD of " << num1 << " and " << num2
         << " = " << a << endl;

    return 0;
}