#include<stdio.h>
void main()
{
	int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10;
	printf("enter n1\n");
	printf("enter n2\n");
	printf("enter n3\n");
	printf("enter n4\n");
	printf("enter n5\n");
	printf("enter n6\n");
	printf("enter n7\n");
	printf("enter n8\n");
	printf("enter n9\n");
	printf("enter n10\n");
    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);
    scanf("%d",&n4);
    scanf("%d",&n5);
    scanf("%d",&n6);
    scanf("%d",&n7);
    scanf("%d",&n8);
    scanf("%d",&n9);
    scanf("%d",&n10);
    if(n1>n2 && n1>n3  && n1>n4  && n1>n5  && n1>n6  && n1>n7  && n1>n8  && n1>n9  && n1>n10)
    {
    	printf("n1 is maximum\n");
    }
    else if(n2>n3 && n2>n4  && n2>n5  && n2>n6  && n2>n7  && n2>n8  && n2>n1  && n2>n10)
    {
    	printf("n2 is maximum\n");
    }
    else if(n3>n4  && n3>n5  && n3>n6  && n3>n7  && n3>n8  && n3>n9  && n3>n10)
    {
    	printf("n3 is maximum\n");
    }
    else if(n4>n5 && n4>n6  && n4>n7  && n4>n8  && n4>n9  && n4>n10)
    {
    	printf("n4 is maximum\n");
    }
    else if(n5>n6 && n5>n7 && n5>n8  && n5>n9  && n5>n10)
    {
    	printf("n5 is maximum\n");
    }
    else if(n6>n7 && n6>n8  && n6>n9  && n6>n10)
    {
    	printf("n6 is maximum\n");
    }
    else if(n7>n8 && n7>n9  && n7>n10)
    {
    	printf("n7 is maximum\n");
    }
    else if(n8>n9  && n8>n10)
    {
    	printf("n8 is maximum\n");
    }
    else if(n9>n10)
    {
    	printf("n9 is maximum\n");
    }
    else
    {
    	printf("n10 is maximum\n");
    }
}
