#include<stdio.h>
#include<string.h>
#include<conio.h>

int upper(char str[100]);

int upper(char str[100])
{
//strupr() function to convert lower case string into upper case string
puts(strupr(str));
}
void main()
{
	char str[100];

	printf("\nEnter a string:");
	gets(str);

	printf("\nString after uppercase conversion:\n");
	upper(str);

}