// CODSOFT TASK 2
#include <iostream>
using namespace std;

// ADDITON FUNCTION
void addition(int a, int b)
{
    cout << "Sum = " << a + b << endl;
}

// SUBTRACTION FUNCTION
void subtraction(int a, int b)
{
    cout << "Subtraction = " << a - b << endl;
}

// MULTIPLICATION FUNCTION
void multiplication(int a, int b)
{
    cout << "Multiplication = " << a * b << endl;
}

// DIVISION FUNCTION
void division(int a, int b)
{
    if (b == 0)
    {
        cout << "Division by zero is not possible." << endl;
    }
    else
    {
        cout << "Division = " << a / b << endl;
    }
}

// MAIN FUNCTION
int main()
{
    int option;
    int num1, num2;

    cout << "SIMPLE CALCULATOR" << endl
         << endl;
    cout << "Instructions" << endl
         << endl;
    cout << "For Addition, press 1" << endl;
    cout << "For Subtraction, press 2" << endl;
    cout << "For Multiplication, press 3" << endl;
    cout << "For Division, press 4" << endl;
    cout << "To end, press -1" << endl;

    while (true)
    {
        cout << endl;
        cout << "Enter the operation: ";
        cin >> option;

        if (option == -1)
        {
            break;
        }

        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;

        cout << endl;
        switch (option)
        {
        case 1:
            addition(num1, num2);
            break;
        case 2:
            subtraction(num1, num2);
            break;
        case 3:
            multiplication(num1, num2);
            break;
        case 4:
            division(num1, num2);
            break;
        default:
            cout << "Invalid option. Please try again." << endl;
            break;
        }
    }

    cout << "Calculator program ended." << endl;

    return 0;
}
