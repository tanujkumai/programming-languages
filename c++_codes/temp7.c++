#include <iostream>
using namespace std;
class animal
{
private:
    int DOB;

public:
    int id, a;
    string name;
    void birthday(int a)
    {
        DOB = a;
        cout << "\n"
             << DOB;
    }

    void print()
    {
        cout << "animal id is " << id << " and name is " << name;
    }
    void setdata()
    {
        cout << "\n"
             << "enter the id of animal " << endl;
        cin >> id;
        cout << "enter the name of the animal " << endl;
        cin >> name;
    }
};
int main()
{
    animal cat;
    cat.setdata();
    cat.print();
    cat.birthday(2408);
    animal dog;
    dog.setdata();
    dog.print();

    return 0;
}