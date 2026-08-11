/*
Pages 205 - 206
Problem No. 1

Design a program using structure and function to accept
two numbers and then the program will display the total
sum of the two numbers on the screen.
*/

#include <iostream>
#include <cctype>
using namespace std;

struct add
{
    int value1, value2;

    int addition()
    {
        return value1 + value2;
    }
};

int main()
{
    add math;
    char reply;

    do
    {
        cout << "\n\n";
        cout << "\t\tAddition of Two Numbers";
        cout << "\n\n";

        cout << "\tEnter the first value : ";
        cin >> math.value1;

        cout << "\n";

        cout << "\tEnter the second value : ";
        cin >> math.value2;

        cout << "\n\n";

        cout << "\tThe sum of "
             << math.value1
             << " and "
             << math.value2
             << " is "
             << math.addition()
             << ".";

        cout << "\n\n";

        cout << "\tDo you want to continue y/n : ";
        cin >> reply;

        if (toupper(reply) == 'N')
        {
            cout << "\n\n";
            cout << "\tThank You For Using This Software !!!";
            break;
        }

    } while (toupper(reply) == 'Y');

    cout << "\n\n";

    return 0;
}