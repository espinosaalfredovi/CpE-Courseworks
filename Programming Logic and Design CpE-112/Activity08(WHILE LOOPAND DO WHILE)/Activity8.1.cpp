/*
Write a program in C++ to find prime number within a range. Use while loop in constructing
your program. Save as Activity8.1.cpp
*/
#include <iostream>
using namespace std;

int main() {
    int start, end;

    cout << "Enter starting number: ";
    cin >> start;

    cout << "Enter ending number: ";
    cin >> end;

    cout << "Prime numbers from " << start << " to " << end << " are:" << endl;

    int number = start;

    while (number <= end) {
        int divisor = 2;
        int count = 0;

        while (divisor < number) {
            if (number % divisor == 0) {
                count++;
                break;
            }

            divisor++;
        }

        if (count == 0 && number > 1) {
            cout << number << " ";
        }

        number++;
    }

    cout << endl;

    return 0;
}