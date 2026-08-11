/*
2.	Make a program in Code Blocks C++ Console Application that will ask the
 user to enter the radius and the height of a right cylinder. 
 The program will compute and display the Volume, Lateral Area, 
 Base Area and the Surface Area. Save as Activity3.2.cpp
 */
#include <iostream>
using namespace std;

#define PI 3.1415926535

int main()
{
    double radius, height;
    double Volume, Lateral_Area, Base_Area, Surface_Area;

    cout << "RIGHT CYLINDER CALCULATOR" << endl;

    cout << "\nEnter Radius: ";
    cin >> radius;

    cout << "Enter Height: ";
    cin >> height;

    Volume = PI * radius * radius * height;
    Lateral_Area = 2 * PI * radius * height;
    Base_Area = PI * radius * radius;
    Surface_Area = 2 * PI * radius * height + PI * radius * radius;

    cout << "\nRESULTS" << endl;

    cout << "The Volume of the right cylinder is "
         << Volume << " cubic units." << endl;

    cout << "The Lateral Area of the right cylinder is "
         << Lateral_Area << " square units." << endl;

    cout << "The Base Area of the right cylinder is "
         << Base_Area << " square units." << endl;

    cout << "The Surface Area of the right cylinder is "
         << Surface_Area << " square units." << endl;

    return 0;
}