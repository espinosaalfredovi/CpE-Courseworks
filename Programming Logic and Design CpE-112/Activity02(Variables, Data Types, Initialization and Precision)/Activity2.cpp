/* 
Modify and correct the Declaration of Variables and Data Types, refer to the expected output below for
the modification.

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
int square_side = 15;
double rectangle_length = 10;
int rectangle_width = 8
int radius = 15;
int number_1 = 15.667;
int number_2 = 20;
int number 3 = 25
 int Money=9.50;
double PI=3.1415926535;
int squareArea = 50;
float rec_Area;
cir_Area = PI * radius * radius;
squarearea = squareside * square_side;
rec_Area = rectangle_length * rectangle_width;
(display the first number here using cout)
(display the second number here using cout)
(display the area of SQUARE here using c out)
(display the area of RECTANGLE here using c out)
(display the area of CIRCLE here using c out with 3 decimal places)
 (display the area of CIRCLE here using c out with 4 decimal places)
(display the area of CIRCLE here using c out with 5 decimal places)
return 0;
}
EXPECTED OUTPUT:
The first number is 15.557
The second number is 20
Area of Square is 225 square units
Area of Rectangle is 80 square units
Area of Circle is 706.858 square units
Area of Circle is 706.8583 square units
Area of Circle is 706.85834 square units


*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double truncateValue(double value, int decimals)
{
    double factor = pow(10.0, decimals);
    return floor(value * factor) / factor;
}

int main()
{
    int square_side = 15;
    double rectangle_length = 10;
    int rectangle_width = 8;
    int radius = 15;

    double number_1 = 15.557;
    int number_2 = 20;
    int number_3 = 25;

    double Money = 9.50;
    double PI = 3.141592653;

    int squareArea;
    double rec_Area;
    double cir_Area;

    squareArea = square_side * square_side;
    rec_Area = rectangle_length * rectangle_width;
    cir_Area = PI * radius * radius;

    cout << "The first number is " << fixed << setprecision(3)
         << number_1 << endl;

    cout << "The second number is " << number_2 << endl;

    cout << "Area of Square is " << squareArea
         << " square units" << endl;

    cout << "Area of Rectangle is " << setprecision(0)
         << rec_Area << " square units" << endl;

    cout << "Area of Circle is " << setprecision(3)
         << truncateValue(cir_Area, 3) << " square units" << endl;

    cout << "Area of Circle is " << setprecision(4)
         << truncateValue(cir_Area, 4) << " square units" << endl;

    cout << "Area of Circle is " << setprecision(5)
         << truncateValue(cir_Area, 5) << " square units" << endl;

    return 0;
}
