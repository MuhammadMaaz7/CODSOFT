// CODSOFT TASK 1
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Hepler function to guess number
void numGuessing(int num, int guess, int upper, int lower)
{
    bool flag = false;

    while (guess != num)
    {
        if (guess == -1)
        {
            cout << "You lost!" << endl;
            cout << "The number was : " << num;
            flag = true;
            break;
        }
        else if (guess <= lower || guess > upper)
        {
            cout << "You entered outside limit!" << endl;
        }
        else if (guess > num)
        {
            cout << "Too high!" << endl;
        }
        else if (guess < num)
        {
            cout << "Too low!" << endl;
        }

        cout << "Enter again : ";
        cin >> guess;
    }

    if (flag != true)
    {
        cout << "Congrats! You guessed is correct" << endl;
    }
}

int main()
{
    srand(time(nullptr));
    int guess, num;
    int upper, lower;

    cout << endl
         << "Welcome to Number Guessing Game!" << endl
         << endl;
    cout << "Instructions" << endl;
    cout << "___________________________________________________________________________" << endl
         << endl;
    cout << "1. First of all enter the maximum and minimum limit of number" << endl;
    cout << "2. Enter number within the limit." << endl;
    cout << "3. To end game enter -1" << endl;
    cout << "___________________________________________________________________________" << endl
         << endl;

    cout << "Enter the limits to start the game." << endl
         << endl;
    cout << "Enter the lower bound." << endl;
    cout << "Lower : ";
    cin >> lower;
    cout << endl;

    cout << "Enter the upper bound." << endl;
    cout << "Upper : ";
    cin >> upper;
    cout << endl;

    num = rand() % (upper - lower - 1) + lower + 1;

    cout << "The random number is between " << lower << " and " << upper << "." << endl;
    cout << "Enter your guess : ";
    cin >> guess;

    numGuessing(num, guess, upper, lower);
}
