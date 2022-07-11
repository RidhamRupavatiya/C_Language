#include<stdio.h>
void main()
{
	int stu[5][3],i,j,k,l,sum,avg;
	for (i=0 ; i<5 ; i++)
	{
		printf("For student %d",i+1);
		for(j=0 ; j<3 ; j++)
		{
			printf("\nEnter marks of subject %d : ",j+1);
			scanf("%d",&stu[i][j]);
		}
		printf("\n");
	}
	for (k=0 ; k<5 ; k++)
	{
		printf("For student %d",k+1);
		sum=0;
		for (l=0 ; l<3 ; l++)
		{
			sum=sum+stu[k][l];
		}
		avg=sum/3;
		printf("\nSum = %d",sum);
		printf("\nAverage = %d",avg);
		printf("\n");
		printf("\n");
	}
}