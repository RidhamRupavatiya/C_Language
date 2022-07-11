#include<stdio.h>
int sum(int n);
int sum(int n)
{
	int result=0;
	for (int i = 1;i<=n;i++)
	{
		result+=i;
	}
	return result;
}
void main()
{
	int n;
	printf("Enter upto how many numbers you want to add\n");
	scanf("%d",&n);

	int result=sum(n);
	printf("SUM=%d",result);
}