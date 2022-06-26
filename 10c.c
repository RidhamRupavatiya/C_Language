#include<stdio.h>
void main()
{
	int i,n,sum=0;
	printf("enter number:");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		if(i%2!=0)
	    sum=sum+i;
	      
	    else if(i%2==0)
	    sum=sum-i;
	 	
	 	i++;
	}
	printf("%d",sum);
}