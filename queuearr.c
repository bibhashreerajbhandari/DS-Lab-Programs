#include<stdio.h>
#define MAX 100
int queue_arr[MAX];
int rear = -1;
int front = -1;
void insert();
void delete();
void display();
int main()
{
int choice;
while (1)
{
printf("1.insert\n2.delete\n3.display\n4.exit");
printf("Enter choice: ");
scanf("%d",&choice);
switch(choice){
case 1: insert();
break;
case 2: delete();
break;
case 3: display();
break;
case 4: exit(1);
default:
printf("error input");
}
}
display();
{
int i;
if (front == -1){
printf("Queue is empty");
}
else{
printf("queue is: ");
for (i=front;i<=rear;i++)
printf("%d",queue_arr[i]);
printf("\n");
}
}
insert();{
int add_item;
if(rear==MAX-1)
printf("queue is full. overflow");
else{
printf("enter value to add to queue:");
scanf("%d",&add_item);
rear=rear+1;
queue_arr[rear]=add_item;
}
}
delete();{
if(front==-1 || front>rear)
{
printf("queue underflow");
return;
}
else{
printf("deleted= %d",queue_arr[front]);
front=front+1;
}
}
}
