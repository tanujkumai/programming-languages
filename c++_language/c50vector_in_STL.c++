#include <iostream>
#include <vector>
using namespace std;
template <class T>
void display(vector<T> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    // ways to create vector
    vector<int> vec1;
    display(vec1);

    vector<char> vec2(5);
    // vector<char> vec3(vec2);
    // vec3.push_back('5');
    // display(vec3);
    vector<int> vec4(6, 3);
    display(vec4);
    char element;
    int size;
    cout << "Enter the size of your vector" << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter an element to add to this vector: ";
        cin >> element;
        vec2.push_back(element);
    }
    display(vec2);
    vec2.pop_back();
    display(vec2);
    return 0;
}
