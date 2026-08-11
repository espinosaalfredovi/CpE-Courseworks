/*
Using Arithmetic Operators, Defined Constants and Functions

Design, write, compile and run a C++ program that will ask for the length of two sides of a right triangle 
(Adjacent and Opposite) and then solves for the length of the hypotenuse and all three angles in degrees. 
Save as Activity3.3.cpp
*/

#include <iostream>
#include <cmath>

using namespace std;

#define PI 3.1415926535

int main()
{
    double a, b, c;
    double angleA, angleB, angleC;

    cout << "RIGHT TRIANGLE CALCULATOR" << endl;

    cout << "\nEnter Side a (Adjacent): ";
    cin >> a;

    cout << "Enter Side b (Opposite): ";
    cin >> b;

    // Calculate hypotenuse
    c = sqrt(a * a + b * b);

    // Calculate angles in radians
    angleA = asin(a / c);
    angleB = atan(b / a);
    angleC = PI / 2;

    // Convert radians to degrees
    angleA = angleA * 180 / PI;
    angleB = angleB * 180 / PI;
    angleC = angleC * 180 / PI;

    cout << "\nRESULTS" << endl;
    cout << "Side c (Hypotenuse) = " << c << endl;
    cout << "Angle A = " << angleA << " degrees" << endl;
    cout << "Angle B = " << angleB << " degrees" << endl;
    cout << "Angle C = " << angleC << " degrees" << endl;

    return 0;
}