#include<stdio.h>
void main()
{
	int i,n;
	float sum=0;
	i=1;
	printf("enter number:");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+1/(float)i;
		i++;
	}
	printf("%f",sum);
}