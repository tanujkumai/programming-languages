#include <stdio.h>
#include <string.h>
int main()
{
    int a;
    char str[4];
    printf("enter string = ");
    gets(str);
    a = strlen(str);
    printf("%d", a);
}