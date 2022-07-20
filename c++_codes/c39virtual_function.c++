#include <iostream>
using namespace std;
class BaseClass
{
public:
    int var_base = 1;
    virtual void display()
    {
        cout << "Dispalying Base class variable var_base " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived = 2;
    void display()
    {
        cout << "Dispalying Base class variable var_base " << var_base << endl;
        cout << "Dispalying Derived class variable var_derived " << var_derived << endl;
    }
};
int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_Base;
    DerivedClass obj_Derived;

    base_class_pointer = &obj_Derived;
    base_class_pointer->display();
    return 0;
}