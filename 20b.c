#include<stdio.h>
struct person
{
	char name[30];
	char date[20];
	int salary;
}p[5];
void main()
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("Enter name=");
		scanf("%s",p[i].name);
		printf("Enter date of joining=");
		scanf("%s",p[i].date);
		printf("Enter salary=");
		scanf("%d",&p[i].salary);
	}
	for(i=0;i<5;i++)
	{
		printf("\n");
		printf("\t\tName=%s",p[i].name);
		printf("\t\tdate of joining=%s",p[i].date);
		printf("\t\tsalary=%d",p[i].salary);
		printf("\n");
	}
}