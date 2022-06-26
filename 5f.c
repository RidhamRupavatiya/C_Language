#include<stdio.h>
void main()
{
	float bs,gs,hra,da;
	printf("enter your basic salary=");
	scanf("%f",&bs);
	if(bs>=10000 && bs<20000)
	{
	da=bs*0.8;
	hra=bs*0.2;
	}
	if(bs>=20000 && bs<30000)
	{
	da=bs*0.9;
	hra=bs*0.25;
	
	}
	if(bs>=30000)
	{
	da=bs*0.95;
	hra=bs*0.3;
	}
	gs=bs+da+hra;
	printf("your salary=%f",gs);
	
}
