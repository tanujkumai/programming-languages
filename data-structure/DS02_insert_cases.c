#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *begin(struct Node *head, int val)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = val;

    ptr->next = head;
    return ptr;
}
struct Node *End(struct Node *e, int val)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = e;

    while (p->next != NULL)
    {
        p = p->next;
    }
    ptr->data = val;
    ptr->next = NULL;
    p->next = ptr;
    return e;
}
struct Node *insertAfterNode(struct Node *head, struct Node *prevNode, int val)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = val;
    ptr->next = prevNode->next;
    prevNode->next = ptr;
    return head;
}
struct Node *insertAtIndex(struct Node *head, int val, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;

    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = val;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}



void print(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 7;
    head->next = second;

    // Link second and third nodes
    second->data = 11;
    second->next = third;

    // Link third and fourth nodes
    third->data = 41;
    third->next = fourth;

    // Terminate the list at the third node
    fourth->data = 66;
    fourth->next = NULL;

    printf("Linked list before insertion\n");
    print(head);
    // head = begin(head, 56);
    // head = insertAtIndex(head, 96, 1);//can't put zero in the index
    // head = End(head, 56);
    head = insertAfterNode(head, third, 45);
    printf("\nLinked list after insertion\n");
    print(head);

    return 0;
}