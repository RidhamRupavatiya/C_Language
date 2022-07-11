#include<stdio.h>
//prototype
//float interest(float p,float r,float n);
//void o();
void main()
{
	float p,r,n;
	printf("Enter the value of p\n");
	scanf("%f",&p);
	printf("Enter the value of r\n");
	scanf("%f",&r);
	printf("Enter the value of n\n");
	scanf("%f",&n);
	//o(15);
	//call of fun
	float result=interest(p,r,n);
	printf("interest=%f",result);
}
//void o(int a)
//{
//	printf("hello this funcation is called %d",a);
//}
//fun decription
float interest(float p,float r,float n)
{
	float SI;
	SI=(p*r*n)/100;
	return SI;
}
