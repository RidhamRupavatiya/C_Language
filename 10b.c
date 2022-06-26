#include<stdio.h>
void main()
{
	int i,n,sum=0;
	printf("enter number:");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		sum=i*i+sum;
		i++;
	}
	printf("%d,",sum);
}