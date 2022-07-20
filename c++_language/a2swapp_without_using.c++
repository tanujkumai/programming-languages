#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter element for a and b:\n";
    cin >> a >> b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "value of a and b:\n"
         << a << "\n"
         << b;
    return 0;
}