#include <stdio.h>
void main()
{
    int n;
    printf("enter how many no. you want you enter:");
    scanf("%d",&n);
    int arr[n],min,mid,max,i,num;
    printf("enter your sorted elemnts:\n");
    for (i=0;i<n;i++)
    {
       scanf("%d",&arr[i]);
    }
    printf("enter which no. you want to search:");
    scanf("%d",&num);
    min=0;
    max=n;
    mid=(min+max)/2;
    for (i=0;i<n;i++)
    {
    if(arr[mid]==num)
    {
        printf("number %d is at %d ",num,mid+1);
        break;
    }
    else if (mid>num)
    {
        max=mid-1;
    }
    else if (mid<num)
    {
        min=mid +1;
    }
    mid=(min+max)/2;
    }

}// using github