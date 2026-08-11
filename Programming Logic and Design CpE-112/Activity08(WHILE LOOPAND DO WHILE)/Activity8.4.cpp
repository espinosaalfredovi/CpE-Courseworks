/* 
Write a program in C++ to calculate the sum of the series (1*1) + (2*2) + (3*3) + (4*4) + (5*5)
+ ... + (n*n). Use do while loop in constructing your program. Save as Activity8.4.cpp
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    int i = 1;
    int sum = 0;

    cout << "Enter the value of n: ";
    cin >> n;

    do {
        sum = sum + (i * i);
        i++;
    } while (i <= n);

    cout << "Sum of the series = " << sum << endl;

    return 0;
}