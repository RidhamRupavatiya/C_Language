#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter your 1st number");
	scanf("%d",&a);
	printf("enter your 2nd number");
	scanf("%d",&b);
	printf("1=addition\n");
	printf("2=subtraction\n");
	printf("3=multiplication\n");
	printf("4=division\n");
	printf("enter your choice for equation:");
	scanf("%d",&c);
	if(c==1)
	{
		c=a+b;
		printf("your ans=%d\n",c);
	}
	if(c==2)
	{
		c=a-b;
		printf("your ans=%d\n",c);
	}
	if(c==3)
	{
		c=a*b;
		printf("your ans=%d\n",c);
	}
	if(c==4)
	{
		c=a/b;
		printf("your ans=%d\n",c);
	}
}
