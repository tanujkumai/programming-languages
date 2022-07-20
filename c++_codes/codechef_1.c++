#include <iostream>
using namespace std;

int main()
{
    int x = 0;
    cout << "Enter Credit Score : ";
    cin >> x;

    if (x > 0)
    {
        if (x >= 750)
        {
            cout << "Yes\n";
        }
        if (x < 750)
        {
            cout << "No\n";
        }
    }
    else
    {
        cout << "invalid range \n";
    }
    return 0;
}
