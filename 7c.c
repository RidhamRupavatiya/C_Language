#include<stdio.h>
void main()
{
	char ch;
	printf("enter your charector");
	scanf("%c",&ch);
	if(ch>='A' && ch<='Z')
	{
		printf("Is the Capatal");
	}
	else if(ch>='a' && ch<='z')
	{
		printf("Is the small letter");
	}
	else if(ch>='0' && ch<='9')
	{
		printf("Is the digital numerical");
	}
	else if(ch!='a' && ch!='0')
	{
		printf("Is the special charector");
	}
	else
	{
		printf("Is the other charector");
	}
}