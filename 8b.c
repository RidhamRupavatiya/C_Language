#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter three numbers digit\n");
	scanf("%d%d%d",&a,&b,&c);
	(a>b)?((a>c)?printf("a is greather\n"):printf("c is greather\n"))
	:((b>c)?printf("b is greather\n"):printf("c is greather\n"));
}