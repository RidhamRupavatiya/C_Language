#include<stdio.h>
void main()
{
	int i,n,max,min,sum=0,avg;
	printf("Enter size of array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter array element=");
		scanf("%d",&a[i]);
	}
	max=a[0];     			//assume the first term to be greatest
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	min=a[0];				//assume the first term to be smallest
	for(i=0;i<n;i++)
	{	
		if(a[i]<min)
		{
			min=a[i];
		}
		sum=sum+a[i];
	}
	avg=sum/n;
	printf("max=%d\n min=%d\n sum=%d\n avg=%d\n",max,min,sum,avg);
}