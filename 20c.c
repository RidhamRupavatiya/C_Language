#include<stdio.h>
struct time_struct
{
	int hour,minute,second;
}t;
void main()
{
	printf("Enter hour=");
	scanf("%d",&t.hour);
	printf("Enter minute=");
	scanf("%d",&t.minute);
	printf("Enter second=");
	scanf("%d",&t.second);
	printf("%d:%d:%d",t.hour,t.minute,t.second);
}