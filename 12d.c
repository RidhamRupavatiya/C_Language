#include<stdio.h>
void main()
{
	int i,n,sum=0,d,m;
	printf("enter number:");
	scanf("%d",&n);
	m=n;
	for(i=1;i<=n;i)
	{
		d=n%10;
		n=n/10;
		sum=(sum*10)+d;
	}
	if(sum==m)
		printf("palindrone\n");
	else
		printf("not palindrone\n");
}