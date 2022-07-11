#include<stdio.h>
void main()
{
	int h[5],w[5],i,j,r=0;
	for (i=0 ; i<5 ; i++)
	{
		printf("Enter height of person %d : ",i+1);
		scanf("%d",&h[i]);
		printf("Enter weight of person %d : ",i+1);
		scanf("%d",&w[i]);
		printf("\n");
	}
	for (j=0 ; j<5 ; j++)
	{
		if (h[j]>170 && w[j]<50)
		{
			r=r+1;
		}
	}
	printf("\nNumber of person having height more than 170cm and weight less than 50kg are: %d",r);
}7
