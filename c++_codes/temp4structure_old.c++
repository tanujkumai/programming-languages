#include <iostream>
using namespace std;
typedef struct student
{
     int salary;
     int id;
     /* data */
} S;
int main()
{
     int arr[4] = {1, 2, 3, 4};
     int i;
     S one;
     S two;
     S three;
     S four;
     four.id = arr[i + 2];
     four.salary = 32000;
     three.id = arr[i + 3];
     three.salary = 45999;
     two.id = arr[1];
     two.salary = 53000;

     one.id = 1;
     one.salary = 34000;
     cout << "||"
          << "\t" << one.id << "\t"
          << "||"
          << "\t" << one.salary << "\t"
          << "||" << endl;
     cout << "||"
          << "\t" << two.id << "\t"
          << "||"
          << "\t" << two.salary << "\t"
          << "||" << endl;
     cout << "||"
          << "\t" << four.id << "\t"
          << "||"
          << "\t" << four.salary << "\t"
          << "||" << endl;
     cout << "||"
          << "\t" << three.id << "\t"
          << "||"
          << "\t" << three.salary << "\t"
          << "||" << endl;
}