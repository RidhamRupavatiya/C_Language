
#include <stdio.h>

void main() 
{
    int a[100],n;

    printf("enter number of integers \n ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("number %d : ",i+1);
        scanf("%d",&a[i]);
    }
    for(int i=(n-1);i>=0;i--)
    {
        printf("number %d is : %d \n",i+1,a[i]);
    }

}