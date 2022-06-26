#include<stdio.h>
void main()
{
	int i,n,sum=0;
	printf("enter number:");
	scanf("%d",&n);
for(i=1;i<n;i++)
{
if(n%i==0)
{
printf("factor=%d",i);
}
sum=sum+i;
if(sum==n)
{

printf("perfect no:");
}
else
{
printf("not perfect no:");
}
}
}