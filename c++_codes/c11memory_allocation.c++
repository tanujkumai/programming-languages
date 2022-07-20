#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    string itemName[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};

void Shop ::setPrice(void)
{
    cout << "enter the name of the item : " << endl;
    cin >> itemName[counter];
    cout << "Enter Id of your item no " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter Price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << itemName[i] << " of Id " << itemId[i] << " is Rs " << itemPrice[i] << endl;
    }
}

int main()
{
    int i, a;
    cout << "how many iteams you want to enter : " << endl;
    cin >> a;
    Shop dukaan;
    dukaan.initCounter();
    for (i = 0; i < a; i++)
    {
        dukaan.setPrice();
    }
    // dukaan.setPrice();
    // dukaan.setPrice();
    // dukaan.setPrice();
    dukaan.displayPrice();
    // Shop generalStore;
    // int c = generalStore.counter; // before using counter of other shopes youhave to use initcounter to make counter variable 0
    // cout << c;// in order to use countre variable we have to use initcounter function because counter is a privater variable.
    return 0;
}