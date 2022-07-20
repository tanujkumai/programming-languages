// use of free() function in the middle of the program
#include <stdio.h>
#include <stdlib.h>

int main()
{

    // // use of malloc() function
    // int *ptr;
    // int n;

    // printf("Enter the size of the pointer\n> ");
    // scanf("%d",&n);

    // ptr = (int *)malloc(n * sizeof(int));
    // for (int i = 0;i<n;i++)
    // {
    //     printf("Enter the value for the pointer\n> ");
    //     scanf("%d",&ptr[i]);
    // }

    // for (int i =0 ;i<n; i++)
    // {
    //     printf("The value at %d no is %d\n",i,ptr[i]);
    // }

    // use of calloc() function
    int *ptr;
    int n;

    printf("Enter the size of the array\n> ");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value for the array\n> ");
        scanf("%d", &ptr[i]);
    }
    4 for (int i = 0; i < n; i++)
    {
        printf("The value at %d no is %d\n", i, ptr[i]);
    }

    free(ptr); // free mmemory for heap

    // use of realloc() function
    printf("Enter the size of the new array you want to create\n> ");
    scanf("%d", &n);

    ptr = (int *)realloc(ptr, n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value for the new array\n");
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The value at %d is %d\n", i, ptr[i]);
    }

    free(ptr); // Note : It's a good habit to free the heap meamory so that the heap can be used for the further operations
    for (int i = 0; i < n; i++)
    {
        printf("The address of the heap is : %d", ptr[i]);
    }

    return 0;
}