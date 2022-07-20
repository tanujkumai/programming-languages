#include <stdio.h>

int inserty(int n, int arr[],
            int x, int pos)
{
    int i;

    n++;

    for (i = n; i >= pos; i--)
        arr[i] = arr[i - 1];
    arr[pos - 1] = x;

    return arr;
}

void printarr()
{
    int i, arr[20];
    for (i = 0; i < 10; i++)
    {
        printf("%d\t", &arr[i]);
    }
}

int main()
{
    int arr[20];
    int i, x, pos, n;
    printf("enter how many element you want : ");
    scanf("%d", &n);
    printf("enter elements : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
        arr[i] = i + 1;

    printarr();
    printf("enter the element you want to enter : ");
    scanf("%d", &x);

    printf("at what positon : ");
    scanf("%d", &pos);

    inserty(n, arr, x, pos);

    printarr();

    return 0;
}
