#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,d,r1,r2,r;
	printf("a=\n");
	scanf("%f",&a);
	printf("b=\n");
	scanf("%f",&b);
	printf("a=\n");
	scanf("%f",&c);

	d=((b*b)-(4*a*c));
	if(d>0)
	{
		r1=((-b)+sqrt(d))/(2*a);
		r2=((-b)-sqrt(d))/(2*a);
		printf("root of equation are different=%2f",r1);
		printf("root of equation are different=%2f",r2);
	}
	if(d==0)
	{
		r=(-b)/(2*a);
		printf("root of equation both are same=%2f",r);
	}
}