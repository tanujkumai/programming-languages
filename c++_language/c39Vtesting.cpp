#include <iostream>
using namespace std;
class A
{
public:
    int a;

    virtual void setData(int a)
    {
        this->a = a;
    }
    virtual void getData()
    {
        cout << "The value of a is " << a << endl;
    }
};

class B : public A
{
public:
    int b;
    void setData(int b)
    {
        this->b = b;
    }
    void getData()
    {
        cout << "The value of b is " << b << endl;
    }
};
int main()
{
    // this is a keyword which is a pointer to the object which invokes the member function
    A *a;
    A obj_A;
    B obj_B;
    a = &obj_B;
    a->setData(6);
    a->getData();
    return 0;
}