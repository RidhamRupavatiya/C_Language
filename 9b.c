#include<stdio.h>
void main()
{
	int i,n;
	i=1;
	printf("enter number between 1 to infinite\n");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d\n",i);
		i=i+1;
	}
}