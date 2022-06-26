#include<stdio.h>
void main()
{
	int s1,s2,s3;
	printf("enter value of sides of triangle\n");
	scanf("%d%d%d",&s1,&s2,&s3);
	if(s1==s2 && s2==s3 && s3==s1)
	{
		printf("your triangle is equiloter triangle\n");
	}
	else if(s1==s2 || s2==s3 || s3==s1)
	{
		printf("your triangle is isosceles triangle\n");
	}
	
	else if(s1*s1==(s2*s2)+(s3*s3) || (s2*s2)==(s1*s1)+(s3*s3) || (s3*s3)==(s1*s1)+(s2*s2))
	{
		printf("your triangle is right angle triangle\n");
	}
	else
	{
		printf("your triangle is scalen triangle\n");
	}
}

