#include<stdio.h>
#include<math.h>
void mian()
{
	int i,n,sum=1,digit;
	printf("enter number\n");
	scanf("%d",&n);
	i=1;
	while(n>0);
		{
			digit=n%10;
			n=n/10;
			sum=sum+digit;
			i++;
		}
		printf("%d",sum);
}