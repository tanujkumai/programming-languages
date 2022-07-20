#include <stdio.h>
int sum(int, int);
void main()
{

    int a, b;
    printf("enter your no. :\n");
    scanf("%d%d", &a, &b);

    printf("%d", sum(a, b));
}
int sum(int a, int b)
{

    int result = a + b;
    return (result);
}