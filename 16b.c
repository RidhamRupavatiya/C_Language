#include<stdio.h>
void main()
{
	int n,i,co=0,ce=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++);
	{
		if(a[i]%2!=0)
		{
			co++;

		}
		else
		{
			ce++;
		}
	}
	printf("%dodd number count",co);
	printf("%deven number count",ce);

}