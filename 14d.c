#include<stdio.h>
int main()
{
	int i,j,x;
	float power,factorial,sum=1,temp;
	printf("enter a value of x:");
	scanf("%d",&x);
	for(i=1;i<=2;i++)
	{
		power=1;
		for(j=1;j<=i;j++)
		{
			power=power*x;
		}
		factorial=1;
		for(j=1;j<=i;j++)
		{
			factorial=factorial*j;
		}
		temp=power/factorial;
		if(i%2==0)
		{
			sum=sum+temp;
		}
		else
		{
			sum=sum-temp;
		}
		printf("%f",sum);
	}
return 0;
}