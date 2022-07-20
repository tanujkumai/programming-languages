#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter element for a and b:\n";
    cin >> a >> b;
    c = a;
    a = b;
    b = c;
    cout << "value of a and b\n"
         << a << "\n"
         << b;
    return 0;
}