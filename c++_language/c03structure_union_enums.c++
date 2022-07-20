#include <iostream>
using namespace std;
typedef struct begin // for using short tick insted using full struct begin you just use typedef function and can give nick name to it at the end of it or before semicolon(;)
{
    char ch;       // 1
    int id;        // 4
    double salary; // 4 total memory allocate is 9.
} bg;

union money // Can also use short trick like struct gives better memory management ,can use only one data type one at time
{
    /* data */
    int rice;     // 4
    char car;     // 1
    float pounds; // 4 total memory allocate is 4 or which is highest. Because you can use only one at time
};

int main()
{
    enum Meal
    {
        breakfast,
        lunch,
        dinner
    };
    Meal m1 = lunch;
    cout << (m1 == 2);
    // cout<<breakfast;
    // cout<<lunch;
    // cout<<dinner;

    // union money m1;
    // m1.rice = 34;
    // m1.car = 'c';
    // cout<<m1.car;

    struct begin aman;
    aman.id = 1;
    aman.ch = 'a';
    aman.salary = 86300;
    bg tanuj;
    tanuj.id = 2;
    cout << tanuj.id << endl;
    cout << aman.id << endl
         << aman.ch << endl
         << aman.salary;
    return 0;
}