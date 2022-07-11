#include<stdio.h>
void main ()    
{    
    int arr[3][3],i,j; 
	int positive=0,negative=0,zero=0;
	    
    for (i=0;i<3;i++)    
    {    
        for (j=0;j<3;j++)    
        {    
            printf("Enter a[%d][%d]: ",i,j);                
            scanf("%d",&arr[i][j]);    
        }    
    }    
    
    for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		if(arr[i][j]>0)	
    		positive++;
    		else if(arr[i][j]==0)
    		zero++;
    		else
    		negative++;
		}
	}
	printf("Positive number count is %d", positive);
   	printf("\nNegative number count is %d", negative);
   	printf("\nZeros count is %d", zero);
}