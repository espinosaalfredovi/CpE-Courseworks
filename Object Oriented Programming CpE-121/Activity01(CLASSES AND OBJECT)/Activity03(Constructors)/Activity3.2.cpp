/*
Create a C++ program that will ask the user two sides of a right triangle
then solve for the missing side (create a class named pythagorean).

In a pythagorean class, create a constructor with parameters (a, b, c)
which is the value of the sides.

The program will then solve (Angle A and Angle B) of the right triangle.

Create an object named (Pytha) then display the values in degrees.

Save as Activity3_02.cpp
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

class pythagorean {
public:
    double a, b, c;
    double angleA, angleB;

    // Constructor with parameters
    pythagorean(double sideA, double sideB, double sideC) {
        a = sideA;
        b = sideB;
        c = sideC;

        // Solve for the missing side
        if (a == 0) {
            a = sqrt((c * c) - (b * b));
        }
        else if (b == 0) {
            b = sqrt((c * c) - (a * a));
        }
        else if (c == 0) {
            c = sqrt((a * a) + (b * b));
        }

        // Solve for Angle A and Angle B
        const double PI = 3.14159265358979323846;

        angleA = asin(a / c) * 180.0 / PI;
        angleB = asin(b / c) * 180.0 / PI;
    }

    void display() {
        cout << fixed << setprecision(2);

        cout << endl;
        cout << "----- Right Triangle Result -----" << endl;
        cout << "Side A: " << a << endl;
        cout << "Side B: " << b << endl;
        cout << "Side C: " << c << endl;

        cout << endl;
        cout << "Angle A: " << angleA << " degrees" << endl;
        cout << "Angle B: " << angleB << " degrees" << endl;
        cout << "Angle C: 90.00 degrees" << endl;
    }
};

int main() {
    double a = 0, b = 0, c = 0;
    char choice;

    cout << "PYTHAGOREAN THEOREM" << endl;
    cout << endl;

    cout << "Which side is missing?" << endl;
    cout << "A - Side A" << endl;
    cout << "B - Side B" << endl;
    cout << "C - Side C (Hypotenuse)" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 'A' || choice == 'a') {
        cout << "Enter Side B: ";
        cin >> b;

        cout << "Enter Side C: ";
        cin >> c;

        if (c <= b) {
            cout << "Invalid input. Side C must be greater than Side B." << endl;
            return 0;
        }
    }
    else if (choice == 'B' || choice == 'b') {
        cout << "Enter Side A: ";
        cin >> a;

        cout << "Enter Side C: ";
        cin >> c;

        if (c <= a) {
            cout << "Invalid input. Side C must be greater than Side A." << endl;
            return 0;
        }
    }
    else if (choice == 'C' || choice == 'c') {
        cout << "Enter Side A: ";
        cin >> a;

        cout << "Enter Side B: ";
        cin >> b;
    }
    else {
        cout << "Invalid choice." << endl;
        return 0;
    }

    // Create object named Pytha
    pythagorean Pytha(a, b, c);

    Pytha.display();

    return 0;
}