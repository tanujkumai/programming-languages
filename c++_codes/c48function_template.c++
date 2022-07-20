#include <iostream>
using namespace std;
template <class T1, class T2>
float funcAverage(T1 a, T2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}
float funcAverage2(int a, int b)
{
    float avg = (a + b) / 2.0;
    return avg;
}
int main()
{
    float a, b;
    a = funcAverage(6.7, 5);
    cout << a << endl;
    b = funcAverage2(6.7, 5);
    cout << b << endl;

    return 0;
}