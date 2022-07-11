#include<stdio.h>

int factorial(int n);

int factorial(int n)
{
	if (n==1)
		return 1;
	else 
		return factorial(n-1)*n;	
}
void main()
{
	int n;
	printf("Enter n=");
	scanf("%d",&n);
	printf("Factorial is %d",factorial(n));
}