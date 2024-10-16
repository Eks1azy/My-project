#include<iostream>
#include<string>
using namespace std;

int main()
{
    int N1, N2, N3;
    char operation;

    cout << "Enter the first number: ";
    cin >> N1;

    cout << "Enter the second number: ";
    cin >> N2;

    cout << "Enter the operation (+, -, *, /): ";
    cin >> operation;

    switch (operation)
    {
    case '*':
        cout << N1 << " * " << N2 << " = " << N1 * N2 << endl;
        break;
    case '+':
        cout << N1 << " + " << N2 << " = " << N1 + N2 << endl;
        break;
    case '-':
        cout << N1 << " - " << N2 << " = " << N1 - N2 << endl;
        break;
    case '/':
        if (N2 != 0) 
        {
            cout << N1 << " / " << N2 << " = " << N1 / N2 << endl;
        }
        else 
        {
            cout << "Error: Division by zero!" << endl;
        }
        break;
    default:
        cout << "Invalid operation!" << endl;
    }

    return 0;
}
