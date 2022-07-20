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
    stud s1, s2, s3;
    enum stu
    {
        s1,
        s2,
        s3
    };
    cout << "Enter student details. " << endl;
    for (int i = 0; i < 3; i++)
    {
        cin >> i.rollno;

        /*
            and so on
        */
    }

    return 0;
}