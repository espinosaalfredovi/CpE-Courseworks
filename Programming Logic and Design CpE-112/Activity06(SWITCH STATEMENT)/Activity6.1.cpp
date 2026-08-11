/*
Using switch statement write, compile and run a program that will ask the user if he/she wants to
solve for Fahrenheit or Celsius. Save as Activity6.1.cpp
F – for Fahrenheit
C – for Celsius
FORMULA:
Celsius = (5/9) * F – 32
Fahrenheit = (9/5) * C + 32
*/

#include <iostream>
using namespace std;

int main() {
    char choice;
    double temperature, answer;

    cout << "Temperature Converter" << endl;
    cout << "F - Convert Celsius to Fahrenheit" << endl;
    cout << "C - Convert Fahrenheit to Celsius" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {

        case 'F':
        case 'f':
            cout << "Enter temperature in Celsius: ";
            cin >> temperature;

            answer = (9.0 / 5.0) * temperature + 32;

            cout << "Fahrenheit = " << answer << endl;
            break;

        case 'C':
        case 'c':
            cout << "Enter temperature in Fahrenheit: ";
            cin >> temperature;

            answer = (5.0 / 9.0) * (temperature - 32);

            cout << "Celsius = " << answer << endl;
            break;

        default:
            cout << "Invalid choice! Please enter F or C." << endl;
    }

    return 0;
}