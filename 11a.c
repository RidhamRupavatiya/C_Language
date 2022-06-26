#include<stdio.h>
void main()
{
	int i,x,y,sum=1;
	printf("enter two number\n");
	scanf("%d%d",&x,&y);
	i=1;
	while(i<=y)
	{
		sum=sum*x;
		i++;
	}
	printf("%d\n",sum);
}