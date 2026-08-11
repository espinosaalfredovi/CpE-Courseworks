/*
ACTIVITY 5.1

Create a C++ program that will generate a random number from 1 to 100.
The user will guess the random number. The program will then tell the
user if the number is TOO HIGH or TOO LOW then the user will need to
guess again until he/she guessed the random number.

The program will display the wrong guesses in ascending sorted order
using SELECTION SORT algorithm.

Save as Activity5.1.cpp
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int randomNumber;
    int guess;

    int wrongGuesses[100];
    int lowGuesses[100];
    int highGuesses[100];

    int wrongCount = 0;
    int lowCount = 0;
    int highCount = 0;

    srand(time(0));
    randomNumber = rand() % 100 + 1;

    cout << "GUESS THE RANDOM NUMBER!!!" << endl;

    do
    {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess < 1 || guess > 100)
        {
            cout << "Please enter a number from 1 to 100 only." << endl;
            continue;
        }

        if (guess < randomNumber)
        {
            cout << "WRONG!! TOO LOW" << endl;

            wrongGuesses[wrongCount] = guess;
            wrongCount++;

            lowGuesses[lowCount] = guess;
            lowCount++;
        }
        else if (guess > randomNumber)
        {
            cout << "WRONG!! TOO HIGH" << endl;

            wrongGuesses[wrongCount] = guess;
            wrongCount++;

            highGuesses[highCount] = guess;
            highCount++;
        }
        else
        {
            cout << "CORRECT CONGRATULATIONS!!" << endl;
        }

    } while (guess != randomNumber);

    // Selection Sort
    for (int i = 0; i < wrongCount - 1; i++)
    {
        int smallest = i;

        for (int j = i + 1; j < wrongCount; j++)
        {
            if (wrongGuesses[j] < wrongGuesses[smallest])
            {
                smallest = j;
            }
        }

        int temp = wrongGuesses[i];
        wrongGuesses[i] = wrongGuesses[smallest];
        wrongGuesses[smallest] = temp;
    }

    cout << endl;

    cout << "LOW GUESSED NUMBERS ARE: ";
    for (int i = 0; i < lowCount; i++)
    {
        cout << lowGuesses[i] << " ";
    }

    cout << endl;

    cout << "HIGH GUESSED NUMBERS ARE: ";
    for (int i = 0; i < highCount; i++)
    {
        cout << highGuesses[i] << " ";
    }

    cout << endl;

    cout << "WRONG GUESSED NUMBERS ARE: ";
    for (int i = 0; i < wrongCount; i++)
    {
        cout << wrongGuesses[i] << " ";
    }

    cout << endl;

    return 0;
}