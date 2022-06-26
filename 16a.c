#include<stdio.h>
void main()
{
	int n,i,cp=0,cn=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++);
	{
		if(a[i]>=0)
		{
			cp++;

		}
		else
		{
			cn++;
		}
	
	printf("%dpositive number count",cp);
	printf("%dnagative number count",cn);
}
}