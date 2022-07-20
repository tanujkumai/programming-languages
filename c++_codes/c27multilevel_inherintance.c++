#include <iostream>
using namespace std;
class student
{
protected:
    int roll_no;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void student ::set_roll_number(int r)
{
    roll_no = r;
}
void student ::get_roll_number()
{
    cout << "The roll number is " << roll_no << endl;
}
class Exam : public student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};
void Exam::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}
void Exam ::get_marks()
{
    cout << "The marks in maths " << maths << endl;
    cout << "The marks in physics " << physics << endl;
}
class Result : public Exam
{
    float percentage;

public:
    void display();
    void set_percentage(void)
    {
        percentage = (maths + physics) / 2;
    }
};
void Result::display()
{
    get_roll_number();
    get_marks();
    set_percentage();
    cout << "your result is " << percentage << "%" << endl;
}
int main()
/*Note:
if we are inheritaing B from A and C from B: (A--->B--->C)
1. A is a base class of B and B is base class of C
*/
{
    Result harry;
    harry.set_roll_number(420);
    harry.set_marks(94.0, 90.0);
    harry.display();
    return 0;
}
