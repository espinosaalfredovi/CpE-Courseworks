/* 
 Using mathematical function. Save as Sample_MathFunction.cpp
Create a C++ program will find the arcsine value of x = 0.25 then display it in radian and degree value.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x = 0.25, result;

    result = asin(x);

    cout << "asin(x) = " << result << " radians" << endl;

    // result in degrees
    cout << "asin(x) = " << result * 180 / 3.1415 << " degrees" << endl;

    return 0;
}
/*
Write the output below: 
asin(x) = 0.25268 radians
asin(x) = 14.4779 degrees
*/