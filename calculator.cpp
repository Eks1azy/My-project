#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    double num1, num2;
    char operation;
    char choice;

    while (true)
    {
        cout << "Enter your first number: ";
        if (!(cin >> num1)) 
        {
            cout << "ERROR" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        cout << "Enter your second number: ";
        if (!(cin >> num2)) 
        {
            cout << "ERROR" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        cout << "Chose the operation (+, -, *, /, %, ^): ";
        cin >> operation;

        switch (operation) 
        {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
            case
            '/':
                if (num2 == 0) 
                {
                    cout
                        << "ERROR ZERO" << endl;
                }
                else 
                {
                    cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
                }
                break;
            case '%':
                if (int(num2) == 0) 
                {
                    cout << "ERROR ZERO" << endl;
                }
                else 
                {
                    cout << static_cast<int>(num1) << " % " << static_cast<int>(num2) << " = " << static_cast<int>(num1) % static_cast<int>(num2) << endl;
                }
                break;
            case '^':
                cout << num1 << " ^ " << num2 << " = " << pow(num1, num2) << endl;
                break;
            default:
                cout << "ERROR" << endl;
        }

        cout << "Continue? (y/n): ";
        cin >> choice;

        if (choice != 'y' && choice != 'Y') 
        {
            cout << "bye bye"; 
            break;
        }

    }
    return 0;
}
