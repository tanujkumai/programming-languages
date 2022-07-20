#include <iostream>
using namespace std;
void daalo1(int array[10], int n)
{ // by simply passing the address of the array
    int i;
    cout << "Enter the elements in your array. " << endl;
    for (i = 0; i < n; i++)
    {
        cout << "Enter element at " << i + 1 << " : ";
        cin >> array[i];
    }
    for (int j = 0; j < n; j++)
    {
        cout << "address of " << j + 1 << " is " << array + j << endl;
    }
}

void daalo2(int *p, int n)
{
    int i;
    cout << "Enter the elements in your array. " << endl;
    for (i = 0; i < n; i++)
    {
        cout << "Enter element at " << i + 1 << " : ";
        cin >> *(p + i);
    }
    for (int j = 0; j < n; j++)
    {
        cout << "address of " << j + 1 << " is " << p + j << endl;
    }
}

int main()
{
    int a;
    cout << "Enter the limit of the array ( Note : limit should be less or equal to ten ) :";
    cin >> a;
    int array[10];
    daalo1(array, a);
    cout << "add in main functtion " << endl;
    for (int j = 0; j < a; j++)
    {
        cout << "address of " << j + 1 << " is " << &array[0] + j << endl;
    }
    daalo2(&array[0], a);
    cout << "add in main function" << endl;
    for (int j = 0; j < a; j++)
    {
        cout << "address of " << j + 1 << " is " << array + j << endl;
    }

    return 0;
}