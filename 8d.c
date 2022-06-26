#include<stdio.h>
void main()
{
	int n;
	printf("enter number 1 to 7\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
		printf("sunday\n");
		break;

		case 2:
		printf("monday\n");
		break;

		case 3:
		printf("tueday\n");
		break;

		case 4:
		printf("wednesday\n");
		break;
	
		case 5:
		printf("thusday\n");
		break;

		case 6:
		printf("friday\n");
		break;
		
		case 7:
		printf("satday\n");
		break;

		default:
		printf("invalid number\n");
		break;

		
	}
}
