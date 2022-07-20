// what is a pointer? pointer is data type which store the address of other data type.
// have a significant notation or denoter by( * ) asterisk sign.
#include <iostream>
using namespace std;
int main()
{
    int a = 3;
    int *b;
    int **c;
    c = &b;
    b = &a;
    // & is the address of variacle
    // * (value at operator) dereference operator
    cout << &a << endl;  // print address
    cout << b << endl;   // print address
    cout << a << endl;   // print value
    cout << *b << endl;  // print value
    cout << &b << endl;  // print address of b
    cout << c << endl;   // print address of b
    cout << *c << endl;  // print the address of a(which is values of b)
    cout << **c << endl; // print the value of a
}