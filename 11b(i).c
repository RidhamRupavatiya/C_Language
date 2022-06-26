#include<stdio.h>
void main()
{
	int i,n,sum=1;
	printf("enter number :");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		sum=i*sum;
		i++;
	}
	printf("%d",sum);
}