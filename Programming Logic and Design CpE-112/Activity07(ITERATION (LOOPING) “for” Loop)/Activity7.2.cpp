/*
 Design, Write, Compile and Run a C++ program that will ask the user an upper limit. The
program will then prints and add all the numbers that are divisible by 3 (from 1 to the upper
limit). Save as Activity7.2.cpp
*/
#include <iostream>
using namespace std;

int main() {
    int upperLimit;
    int sum = 0;

    cout << "Enter the upper limit: ";
    cin >> upperLimit;

    cout << "Numbers divisible by 3: ";

    for (int i = 1; i <= upperLimit; i++) {
        if (i % 3 == 0) {
            cout << i << " ";
            sum = sum + i;
        }
    }

    cout << endl;
    cout << "Sum = " << sum << endl;

    return 0;
}