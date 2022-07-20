#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void print(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d", ptr->data);
        ptr = ptr->next;
    }
}
int main()
{
    struct node *head;
    head = (struct node *)malloc(sizeof(struct node));
    head->data = 5;
    head->next = NULL;
     printf("%d\n", head->data);
     print(head);
     return 0;
}