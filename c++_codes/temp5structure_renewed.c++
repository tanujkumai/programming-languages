#include <iostream>
using namespace std;
typedef struct student
{
    char name[10];
    int marks;
    int id;
    /* data */
} S;
int main()
{
    int n;
    cout << "enter the number of student: " << endl;
    cin >> n;

    S stud[n];
    cout << "Enter student details. " << endl;
    for (int i = 0; i < n; i++)
    {

        cout << "Rollno number of " << i + 1 << " id "
             << " : ";
        cin >> stud[i].id;

        cout << "enter name of rollno." << i + 1 << " : ";
        cin >> stud[i].name;

        cout << "Marks of " << i + 1 << " : ";
        cin >> stud[i].marks;

        cout << endl;
    }
    cout << "Displaying the enteries -" << endl
         << endl;
    cout << "||\tid\t||\tName\t||\tMarks\t||" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "||"
             << "\t "
             << stud[i].id
             << "\t"
             << "||"
             << "\t "
             << stud[i].name
             << "\t"
             << "||"
             << "\t"
             << stud[i].marks
             << "\t"
             << "||" << endl;
    }

    return 0;
}
