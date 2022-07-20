#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

struct Node *print(struct Node *head)
{
    struct Node *p = head;
    do
    {
        printf("%d\n", p->data);
        p = p->next;
    } while (p != head);
}

struct Node *begin(struct Node *head, int val)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = val;
    struct Node *p = head;

    while (p->next != head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
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
    fourth->next = head;

    printf("Linked list before insertion\n");
    print(head);
    head = begin(head, 56);
    // head = insertAtIndex(head, 96, 1);//can't put zero in the index
    // head = End(head, 56);
    // head = insertAfterNode(head, third, 45);
    printf("\nLinked list after insertion\n");
    print(head);

    return 0;
}