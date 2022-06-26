#include<stdio.h>

void main()
{
	int bNo, dNo,rem,base;
	printf("Enter a bionary number:");
	scanf("%d",&bNo);

	while(bNo>0)
	{
		rem = bNo % 10;
        dNo= dNo+ rem * base;
        bNo = bNo / 10;
        base = base * 2;  
	}
	printf("Decimal =%d\n",dNo);
}
