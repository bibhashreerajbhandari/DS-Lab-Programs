#include <stdio.h>
#include <stdlib.h>
struct Employee {
int id;
char name[50];
float salary;
};
int main()
{
struct Employee *ptr;
int empno;
printf("Enter the no.of emp:");
scanf("%d",&empno);
ptr = (struct Employee *)malloc(empno * sizeof(struct Employee));
printf("\nSize of structure employee:%d bytes\n",(int)sizeof(struct Employee));
for (int i=0; i<empno; i++)
{
    printf("Enter emp id:");
    scanf("%d",&ptr[i].id);
    printf("Enter emp name:");
    scanf("%s",ptr[i].name);
    printf("Enter emp salary:");
    scanf("%f",&ptr[i].salary);
}
int sum=0;
for (int i=0; i<empno; i++)
{
    sum=sum+ptr[i].salary;
}
int annualsal= sum*12;
printf("The salary=%d",annualsal);

}
