#include <stdio.h>
void makearray(int, int, int);
void printarray(int[10][10], int int);
void main()
{
    int i, j;
    int size;
    printf("enter the size of the matrix = \n");
    scanf("%d", &size);
    int r, c;
    printf("enter the number of rows and coloums = \n");
    scanf("%d%d", &r, &c);
    makearray(size, r, c);
    // printarray(r, c, ar[i][j]);
}

void makearray(int size, int a, int b)
{
    int ar[size][size];
    int i, j;
    // printf("%d%d%d", a, b, size);
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf("ar[%d][%d]=", i, j);
            scanf("%d", &ar[i][j]);
        }
    }
    printarray(ar, a, b);
}

void printarray(int ar[10][10], int a, int b)
{
    int i, j;
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf("%d", ar[i][j]);
        }
    }
}