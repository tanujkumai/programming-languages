#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

// Represent the head and tail of the doubly linked list
struct Node *head, *tail = NULL;

// addNode() will add a node to the list
void addNode(int data)
{
    // Create a new node
    struct Node *newNode ;
    newNode= (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;

    // If list is empty
    if (head == NULL)
    {
        // Both head and tail will point to newNode
        head = tail = newNode;
        // head's previous will point to NULL
        head->prev = NULL;
        // tail's next will point to NULL, as it is the last node of the list
        tail->next = NULL;
    }
    else
    {
        // newNode will be added after tail such that tail's next will point to newNode
        tail->next = newNode;
        // newNode's previous will point to tail
        newNode->prev = tail;
        // newNode will become new tail
        tail = newNode;
        // As it is last node, tail's next will point to NULL
        tail->next = NULL;
    }
}

// reverse() will reverse the doubly linked list
void reverse()
{
    // Node current will point to head
    struct Node *current = head, *temp = NULL;

    // Swap the previous and next pointers of each node to reverse the direction of the list
    while (current != NULL)
    {
        temp = current->next;
        current->next = current->prev;
        current->prev = temp;
        current = current->prev;
    }
    // Swap the head and tail pointers.
    temp = head;
    head = tail;
    tail = temp;
}

// display() will print out the nodes of the list
void display()
{
    // Node current will point to head
    struct Node *current = head;
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    while (current != NULL)
    {
        // Prints each node by incrementing pointer.
        printf("%d ", current->data);
        current = current->next;
    }
}

int main()
{
    // Add nodes to the list
    addNode(1);
    addNode(2);
    addNode(3);
    addNode(4);
    addNode(5);

    printf("Original List: \n");
    display();

    // Reverse the given list
    reverse();

    // Displays the reversed list
    printf("\nReversed List: \n");
    display();

    return 0;
}