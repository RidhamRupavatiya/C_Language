#include<stdio.h>
struct book
{
	char title[30];
	char author[30];
	char publication[30];
	int price;
} b[100];
void main()
{
	int num,i,t=1;
	printf("Enter the number of books");
	scanf("%d",&num);
	
	for(i=0;i<num;i++)
	{
	printf("\n");
	printf("\t=:Book %d Detail:=\n",i+1);
	  
	printf("\nEnter title=\n");
	scanf("%s",b[i].title);
	printf("Enter author=\n");
	scanf("%s",b[i].author);
	printf("Enter publication=\n");
	scanf("%s",b[i].publication);
	printf("Enter price=\n");
	scanf("%d",&b[i].price);
	}
	for(i=0;i<num;i++,t++)
	{
		printf("\n");
	printf("\t\tBook %d Title is=%s \n",t,b[i].title);
	printf("\t\tBook %d Author is=%s \n",t,b[i].author);
	printf("\t\tBook %d Publication is=%s \n",t,b[i].publication);
	printf("\t\tBook %d Price is=%d \n",t,b[i].price);
		printf("\n");
	}
}