#include<stdio.h>
void main()
{
	int n,i,sum=0;
	i=1;
	printf("enter a number :");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=i+sum;
		i++;
	}
	printf("%d\n",sum);
}