#include <iostream>
using namespace std;
typedef struct students
{
    int rollno;
    char favchar;
    float marks;
} stud;
int main()
{
    int n;
    cout << "How many number of student's data you want to enter ?" << endl;
    cin >> n;
    stud studen[n];
    cout << "Enter student details. " << endl;
    for (int i = 0; i < n; i++)
    {

        cout << "Roll number of " << i + 1 << " : ";
        cin >> studen[i].rollno;

        cout << "favourite character of " << i + 1 << " : ";
        cin >> studen[i].favchar;

        cout << "Marks of " << i + 1 << " : ";
        cin >> studen[i].marks;

        cout << endl;
    }
    cout << "Displaying the enteries -" << endl
         << endl;
    cout << "||\tRollNo.\t||\t Favourite character \t||\tMarks\t||" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "||\t  " << studen[i].rollno << "  \t||\t         " << studen[i].favchar << "         \t||\t" << studen[i].marks << "\t||" << endl;
    }

    return 0;
}