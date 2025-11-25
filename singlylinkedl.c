#include <stdio.h>
#include <stdlib.h>

struct node {
    int info;
    struct node *next;
};
typedef struct node* NODE;

// Function prototypes
NODE insertFront(NODE first);
NODE insertRear(NODE first);
NODE insertAfter(NODE first);
void display(NODE first);

int main()
{
    NODE first = NULL;
    int choice;
    while(1)
    {
        printf("\n1.Insert Front\n2.Insert Rear\n3.Insert After\n4.Display\n5.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: first = insertFront(first); break;
            case 2: first = insertRear(first); break;
            case 3: first = insertAfter(first); break;
            case 4: display(first); break;
            case 5: exit(0);
            default: printf("Invalid choice\n");
        }
    }
    return 0;
}
// Insert at front
NODE insertFront(NODE first)
{
    NODE temp = NULL;
    temp = (NODE)malloc(sizeof(struct node));
    if(temp == NULL)
    {
        printf("Insufficient memory\n");
        return first;
    }
    printf("\nEnter element to be inserted: ");
    scanf("%d",&temp->info);
    temp->next = NULL;
    if(first == NULL)
        first = temp;
    else
    {
        temp->next = first;
        first = temp;
    }
    return first;
}

// Insert at rear
NODE insertRear(NODE first)
{
    NODE temp, cur;
    temp = (NODE)malloc(sizeof(struct node));
    if(temp == NULL)
    {
        printf("Insufficient memory\n");
        return first;
    }
    printf("\nEnter element to be inserted: ");
    scanf("%d",&temp->info);
    temp->next = NULL;
    if(first == NULL)
        first = temp;
    else
    {
        cur = first;
        while(cur->next != NULL)
            cur = cur->next;
        cur->next = temp;
    }
    return first;
}

// Insert after a given key
NODE insertAfter(NODE first)
{
    int key;
    NODE temp, cur;
    if(first == NULL)
    {
        printf("List is empty\n");
        return first;
    }
    printf("\nEnter the key after which to insert: ");
    scanf("%d",&key);
    cur = first;
    while(cur != NULL && cur->info != key)
        cur = cur->next;
    if(cur == NULL)
    {
        printf("Key not found\n");
        return first;
    }
    temp = (NODE)malloc(sizeof(struct node));
    if(temp == NULL)
    {
        printf("Insufficient memory\n");
        return first;
    }
    printf("Enter element to be inserted: ");
    scanf("%d",&temp->info);
    temp->next = cur->next;
    cur->next = temp;
    return first;
}

// Display list
void display(NODE first)
{
    NODE cur;
    if(first == NULL)
    {
        printf("List is empty\n");
        return;
    }
    printf("List elements: ");
    cur = first;
    while(cur != NULL)
    {
        printf("%d ",cur->info);
        cur = cur->next;
    }
    printf("\n");
}

