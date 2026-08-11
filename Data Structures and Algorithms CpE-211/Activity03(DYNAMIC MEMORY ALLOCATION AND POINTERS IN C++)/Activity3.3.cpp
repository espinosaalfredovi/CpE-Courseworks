/*
Activity3_4.cpp

QUESTION:
Modify the program below. Rewrite the code where the user can choose
Annually, Semiannually, Quarterly or Monthly.

Save as Activity3_4.cpp

SAMPLE OUTPUT:

Choose Sales Period:
1. Annually
2. Semiannually
3. Quarterly
4. Monthly

Enter your choice: 3

Enter the sales figure for Quarter 1: 10000
Enter the sales figure for Quarter 2: 15000
Enter the sales figure for Quarter 3: 12000
Enter the sales figure for Quarter 4: 18000

The total sales for the year are $55000.00
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Function to get sales
void getSales(double *arr, int size, string period)
{
    for (int count = 0; count < size; count++)
    {
        cout << "Enter the sales figure for "
             << period << " " << (count + 1) << ": ";

        cin >> arr[count];
    }
}

// Function to calculate total sales
double totalSales(double *arr, int size)
{
    double sum = 0.0;

    for (int count = 0; count < size; count++)
    {
        sum += *arr;
        arr++;
    }

    return sum;
}

int main()
{
    const int MAX_SIZE = 12;
    double sales[MAX_SIZE];

    int choice;
    int size;
    string period;

    cout << "Choose Sales Period:" << endl;
    cout << "1. Annually" << endl;
    cout << "2. Semiannually" << endl;
    cout << "3. Quarterly" << endl;
    cout << "4. Monthly" << endl;

    cout << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            size = 1;
            period = "Year";
            break;

        case 2:
            size = 2;
            period = "Semester";
            break;

        case 3:
            size = 4;
            period = "Quarter";
            break;

        case 4:
            size = 12;
            period = "Month";
            break;

        default:
            cout << "Invalid choice!" << endl;
            return 0;
    }

    cout << endl;

    getSales(sales, size, period);

    cout << endl;
    cout << setprecision(2);
    cout << fixed << showpoint;

    cout << "The total sales for the year are $";
    cout << totalSales(sales, size) << endl;

    return 0;
}