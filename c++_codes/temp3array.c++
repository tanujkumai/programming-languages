#include <iostream>
using namespace std;
int main()
{
    int ar[5] = {2, 3, 4, 5, 6};
    cout << ar[0] << endl;
    cout << ar[1] << endl;
    cout << ar[2] << endl;
    cout << ar[3] << endl;
    ar[4] = 1;
    cout << ar[4];
    int matrix[4][4];
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << "enter matrix"
                 << "[" << i << "]"
                 << "[" << j << "]"
                 << "=";
            cin >> matrix[i][j];
        }
    }

    return 0;
}