#include<stdio.h>
void main()
{
	int i,n;
	printf("enter number:");
	scanf("%d",&n);
	for(i=1;i<=n/2;i++)
	{
		if(n%1==0 && n%n==0 && n%i!=0)
		{
			printf("%d,",n);
		}
	}
}