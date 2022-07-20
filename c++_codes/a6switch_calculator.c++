#include <iostream>
using namespace std;
int main()
{
    char opt;
    double a, b;
    cout << "enter the first value:\n";
    cin >> a;
    cout << "pick a operation('+','-','*','/'):\n";
    cin >> opt;
    cout << "enter the second value:\n";
    cin >> b;
    switch (opt)
    {
    case '+':

        cout << "addition is: " << a + b;
        break;

    case '-':
        cout << "subtraction is :" << a - b;
        break;

    case '*':
        cout << "mulplication is :" << a * b;
        break;
    case '/':
        cout << "division is :" << a / b;
        break;

    default:
        cout << "operation is not known or one of the value is 0!";
        break;
    }
    return 0;
}
