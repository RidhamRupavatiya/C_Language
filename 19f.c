#include<stdio.h>

int swap(int p,int q);
int swap(int p,int q)
{

    int tmp;
    tmp = p; 
    p=q;    
    q=tmp; 

 printf("\nAfter swapping: n1 = %d, n2 = %d \n\n",p,q);	  
}

void main()
{

    int n1,n2;
	printf("\n\n Function : swap two numbers using function :\n");
	printf("------------------------------------------------\n");	   
    printf("Input n1 number : ");
    scanf("%d",&n1);
    printf("Input n2 number : ");
    scanf("%d",&n2);	

 printf("\n\nBefore swapping: n1 = %d and n2 = %d\n", n1, n2);  
  
    swap(n1, n2);  
   
    
}

