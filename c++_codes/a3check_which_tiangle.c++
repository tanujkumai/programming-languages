#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter three angle of the triangle:\n";
    cin >> a >> b >> c;
    if (a + b + c == 180)
    {
        if (a == 90 || b == 90 || c == 90)
        {
            cout << "it is right angle triangle";
        }
        else if (a > 90 || b > 90 || c > 90)
        {
            cout << "it is obtuse triangle";
        }
        else
        {
            cout << "it is acute triangle";
        }
    }
    return 0;
}