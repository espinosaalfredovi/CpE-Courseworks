/*
Design, Write, Compile and Run a C++ program that will generate 3 random numbers from 1
to 10. The program will then display if the random numbers have the same value, two of them
have the same value or they are all unique.
Save as Activity9.2.cpp
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int num1, num2, num3;

    srand(time(0));

    num1 = rand() % 10 + 1;
    num2 = rand() % 10 + 1;
    num3 = rand() % 10 + 1;

    cout << "Random Number 1: " << num1 << endl;
    cout << "Random Number 2: " << num2 << endl;
    cout << "Random Number 3: " << num3 << endl;

    cout << endl;

    if (num1 == num2 && num2 == num3) {
        cout << "All three numbers have the same value." << endl;
    }
    else if (num1 == num2 || num1 == num3 || num2 == num3) {
        cout << "Two numbers have the same value." << endl;
    }
    else {
        cout << "All numbers are unique." << endl;
    }

    return 0;
}