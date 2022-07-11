#include<stdio.h>

int fibbo(int n);

int fibbo(int n)
{
	int a=0, b=1, c;
   for(int i=0; i<n; i++)
   {
     printf("%d\t", a);
     c = a+b;
     a = b;
     b = c;
   }
}
void main()
{
	int n;
	printf("Enter the term");
	scanf("%d",&n);
	printf("The fibonacci series is....\n");
	fibbo(n);
}