#include<stdio.h>
void main()
{
	int n,d,sum=0;
	printf("enter number:");
	scanf("%d",&n);
	for(n=1;n>0;n++)
	{
		d=n%10;
		n=n/10;
		sum=sum+d;
	}
	printf("%d",sum);
}