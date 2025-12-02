#include <stdio.h>
#include <stdlib.h>

struct node {
    int info;
    struct node *next;
};
typedef struct node* NODE;

NODE insertRear(NODE first);
NODE rev(NODE head);
void display(NODE first);


int main()
{
    NODE first = NULL;
    NODE second = NULL;
    int choice;
    while(1)
    {
        printf("\n1.Insert to list\n2.Display \n3.Reverse list\n6.exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: first = insertRear(first); break;
            case 2: display(first); break;
            case 3: printf("Reversing lists...\n");
                    head = rev(head);
                    display(head);
                    break;
            case 4: exit(0);
            default: printf("Invalid choice\n");
        }
    }
    return 0;
}

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

void display(NODE first) {
    NODE cur = first;
    printf("\nList: ");
    while (cur != NULL) {
        printf("%d -> ", cur->info);
        cur = cur->next;
    }
    printf("NULL\n");
}

NODE rev(NODE head)
{
    NODE cur;
    cur=head;
    prev= NULL
    while(cur!=NULL)
    {
        next=cur->next;
        cur->next=prev;
        prev=cur;
        cur=next;
    }
    return head;
}
