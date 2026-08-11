/* 
Using Constant and Cin. Save as Sample_Constant_Cin.cpp
Design, write, compile, run a C++ program that will calculate the surface area and volume of a cylinder.
*/

#include <iostream>
using namespace std;

#define PI 3.14159

int main()
{
    float radius, height;
    float Surface_Area, Volume;

    cout << "CYLINDER VOLUME AND SURFACE AREA CALCULATOR" << endl;

    cout << "\nEnter Radius: ";
    cin >> radius;

    cout << "Enter Height: ";
    cin >> height;

    Surface_Area = 2 * PI * radius * height + 2 * PI * radius * radius;
    Volume = PI * radius * radius * height;

    cout << "\nSurface Area = " << Surface_Area << " square units" << endl;
    cout << "Volume = " << Volume << " cubic units" << endl;

    return 0;
}

/* Write the output below: 
Enter Radius: 20
Enter Height: 20

Surface Area = 5026.54 square units
Volume = 25132.7 cubic units
*/