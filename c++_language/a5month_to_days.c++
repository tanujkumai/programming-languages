#include <iostream>
using namespace std;
int main()
{
    int month;
    cout << "enter the number corresponding to month :\n";
    cin >> month;
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << "there are 31 days";
        break;

    case 2:
        cout << "29/28 days";
        break;

    case 4:
    case 6:
    case 9:
    case 11:
        cout << "there are 30 days";
        break;

    default:
        cout << "no month corresponding to the number!";
        break;
    }
    return 0;
}