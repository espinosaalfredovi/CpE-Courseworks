/*
2. Create a C++ program that will compute the value of the base radius
   of the right cylinder given the volume of the right cylinder and
   height to solve for its radius.

   Use get and set method in constructing your program.

   Save as Activity4_02.cpp
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

class Cylinder {
private:
    double volume;
    double height;
    double radius;

public:
    // Setter for volume
    void setVolume(double v) {
        volume = v;
    }

    // Setter for height
    void setHeight(double h) {
        height = h;
    }

    // Getter for volume
    double getVolume() {
        return volume;
    }

    // Getter for height
    double getHeight() {
        return height;
    }

    // Compute the radius
    void setRadius() {
        const double PI = 3.141592653589793;
        radius = sqrt(volume / (PI * height));
    }

    // Getter for radius
    double getRadius() {
        return radius;
    }
};

int main() {
    Cylinder cylinder;

    double volume;
    double height;

    cout << "RIGHT CIRCULAR CYLINDER" << endl;
    cout << endl;

    cout << "Enter the volume of the cylinder: ";
    cin >> volume;

    cout << "Enter the height of the cylinder: ";
    cin >> height;

    // Set the values
    cylinder.setVolume(volume);
    cylinder.setHeight(height);

    // Calculate the radius
    cylinder.setRadius();

    cout << fixed << setprecision(2);

    cout << endl;
    cout << "Volume: " << cylinder.getVolume() << endl;
    cout << "Height: " << cylinder.getHeight() << endl;
    cout << "Base Radius: " << cylinder.getRadius() << endl;

    return 0;
}