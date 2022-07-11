#include<stdio.h>
struct student_record
{
	char name[30];
	char branch[30];
	int marks;
}s[10];

void main()
{
	int i;
	for(i=0;i<10;i++)
	{
		printf("Enter Name:");
		scanf("%s",s[i].name);
		printf("Enter your branch name:");
		scanf("%s",s[i].branch);
		printf("Enter marks:");
		scanf("%d",s[i].marks);
	}
	
		for(i=0;i<10;i++)
	{
		printf("\n");
		printf("\t\tName=%s",s[i].name);
		printf("\t\tBranch Name=%s",s[i].branch);
		printf("\t\tMarks=%d",s[i].marks);
		printf("\n");
	}
}