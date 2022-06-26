#include<stdio.h>
void main()
{
	char ch;
	printf("enter charector");
	scanf("%d",&ch);
	if(ch>=65 && ch<=90)
	{
		printf("charector is upper alphabet");
	}
	else if(ch>=97 && ch<=122)
	{
		printf("charector is lowercase alphabe");
	}
	else if(ch>=48 && ch<=57)
	{
		printf("charector is digital numerical");
	}
	else if(ch>=48 && ch<=57)
	{
		printf("charector is special");
	}
	else
	{
		printf("other sign");
	}
}

