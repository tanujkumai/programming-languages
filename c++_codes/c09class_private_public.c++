#include <iostream>
using namespace std;

class Employee
{
private:
    int a, b, c;

public:
    int d, e, f;
    void setData(int a1, int b1, int c1, int f1); // Declaration
    void getData()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << "The value of d is " << d << endl;
        cout << "The value of e is " << e << endl;
        cout << "The value of f is " << f << endl;
    }
};

void Employee ::setData(int a1, int b1, int c1, int f1)
{
    a = a1;
    b = b1;
    c = c1;
    f = f1;
}

int main()
{
    Employee harry;
    // harry.a = 134; -->This will throw error as a is private
    harry.f = 123; // does not work here. value will change to 5 at set function
    harry.d = 34;
    harry.e = 89;
    harry.setData(1, 2, 4, 5); // value of f change here to 5
    harry.f = 123;             // it is a public member  // does work here. value will change again here to 123. before get print
    harry.getData();
    return 0;
}