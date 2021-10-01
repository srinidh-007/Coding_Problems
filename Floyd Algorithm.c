#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
    int visited;
} SLL;

SLL *insert(SLL *head, int val)
{
    if(head == NULL)
    {
        head = (SLL*) malloc(sizeof(SLL*));
        head->data = val;
        head->next = NULL;
        head->visited = 0;
    }
    else {
        SLL *temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        SLL *new = (SLL*) malloc(sizeof(SLL*));
        new->data = val;
        new->next = NULL;
        new->visited = 0;
        temp->next = new;
    }
    return head;
}

void printList(SLL *head)
{
    SLL*temp = head;
    while(temp != NULL)
    {
        printf("%d -> ",temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int checkForCycles(SLL *head)
{
    SLL *slow = head;
    SLL *fast = head;

    while(slow != NULL && fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    SLL *head = NULL;
    head = insert(head, 10);
    head = insert(head, 15);
    head = insert(head, 20);
    head = insert(head, 25);
    head = insert(head, 30);
    head = insert(head, 35);
    head = insert(head, 40);
    
    printList(head);

    // head->next->next->next->next = head;

    // Floyd algorithm
    if(checkForCycles(head))
    {
        printf("Cycle is present in the list\n");
    }
    else {
        printf("Cycle is not present in the list\n");
    }

    return 0;
}
