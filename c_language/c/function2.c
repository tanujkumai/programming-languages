#include <stdio.h>
void sum();
void main()
{
    sum();
    sum();
}
void sum()
{
    int a, b, sum;
    printf("\n entre 2 number:\n");
    scanf("%d%d", &a, &b);
    sum = a + b;
    printf("%d", sum);
}
