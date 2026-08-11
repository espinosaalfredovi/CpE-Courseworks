/*
Create a C++ program that will ask the user to enter 10 numbers.
The program will then separate all the even and odd numbers
from lowest to the highest.

Use array in constructing your codes.

Save as Activity10.2.cpp
*/

#include <iostream>
using namespace std;

int main() {
    int numbers[10];
    int temp;

    cout << "Enter 10 numbers:" << endl;

    for (int i = 0; i < 10; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    // Sort numbers from lowest to highest
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) {
            if (numbers[j] > numbers[j + 1]) {
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    cout << endl;
    cout << "Even numbers: ";

    for (int i = 0; i < 10; i++) {
        if (numbers[i] % 2 == 0) {
            cout << numbers[i] << " ";
        }
    }

    cout << endl;
    cout << "Odd numbers: ";

    for (int i = 0; i < 10; i++) {
        if (numbers[i] % 2 != 0) {
            cout << numbers[i] << " ";
        }
    }

    cout << endl;

    return 0;
}