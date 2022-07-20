#include <iostream>
using namespace std;

class complex
{
    int a, b;
    friend Complex sumComplex(Complex o1, Complex o2);

public:
    void setcomplex(int m, int n)
    {
        a = m;
        b = n;
    }

    // int sumofreal(complex o1, complex o2)
    // {
    //     return (o1.a + o2.a);
    // }

    void printit()
    {
        cout << "Complex number : " << a << "+" << b << "i" << endl;
    }
};
complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    complex c1, c2, c3, c4;
    c1.setcomplex(3, 4);
    c1.printit();
    c2.setcomplex(1, 5);
    c2.printit();
    c3.sumcomplex(c1, c2);
    c3.printit();

    return 0;
}
