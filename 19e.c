#include<stdio.h>

int prime(int no);
int prime(int no)
{
	int i;
	for(i=2;i<=no/2;i++)
    {
        if(no%i==0)
        {
			return 0;            
        }
    }
    return 1;
}
void main()
{
	int no,ans;
	printf("\nEnter number:");
	scanf("%d",&no);
	ans=prime(no);
	
	printf("1=Prime and 0=Notprime\n");
	
		if(no==1)
    	printf("0");
	else if(ans==1)
	 	printf("1");
	 else
    	printf("0");
}