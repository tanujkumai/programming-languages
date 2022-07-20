#include <iostream>
using namespace std;
int main()
{
    int fare, dis;
    cout << "enter distance travelled:\n";
    cin >> dis;
    if (dis <= 5)
    {
        fare = 50;
    }
    else if (dis <= 15)
    {
        fare = 50 + (dis - 5) * 5;
    }
    else if (dis <= 25)
    {
        fare = 100 + (dis - 15) * 4;
    }
    else
    {
        fare = 140 + (dis - 25) * 2;
    }
    cout << "your fare is " << fare;
    return 0;
}