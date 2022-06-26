#include <stdio.h>
void main ()
{
	int a;
	int b;
	int c;
	 printf("enter the value of a\n");
	 printf("enter the value of b\n");
	 printf("enter the value of c\n");
	 
	 scanf("%d" , &a);
	 scanf("%d" , &b);
	 scanf("%d" , &c);

	 if(a>b && a>c)
	 {
	 	printf("a is gratesst\n");
	 }
	
 if(b>a && b>c)
	 {
	 	printf("b is gratesst\n");
	 }
	
	 if(c>a && c>b)
	 {
	 	printf("c is gratesst\n");
	 }
	
}