#include <stdio.h>
#include "temp.c"
int myfunc(int a, int b)
{
    // auto int myVar;
    static int myVar;
    myVar++;
    printf("The myVar is %d\n", myVar);

    // myVar = a+b;
    return myVar;
}
int mysum(int f, int j)
{
    extern int sum; // we have to use extern keyword
    sum += f + j;
    return sum;
}
extern int t;
int sum = 890; // it is global variable to use it
int main()
{
    int a;

    // Declaration - Telling the compiler about the variable (No space reserved)
    // Definition - Declaration + space reservation
    register int myVar = myfunc(3, 5);
    myVar = myfunc(3, 5);
    myVar = myfunc(3, 5);
    myVar = myfunc(3, 5);

    // printf("The myVar is %d\n", myVar);
    printf("The myVar is %d\n", mysum(7, 3));
    printf("%d", t); // value of "t" come from temp.c file

    return 0;
}
