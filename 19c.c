#include<stdio.h>
int max(int x,int y);
int max(int x,int y)
{
	int result;
	if(x>y)
	{
		result=x;
	}
	else
	{
		result=y;
	}
	return result;
}
void main()
{
	int a,b;
	printf("Enter your 1st number\n");
	scanf("%d",&a);
	printf("Enter your 2nd number\n");
	scanf("%d",&b);

	printf("maximum : %d ",max(a,b));

}