/*Accept marks from user and check pass or fail*/
#include<stdio.h>
int main()
{
	int marks;
	printf("Enter your marks\n");
	scanf("%d",&marks);
	if(marks>35)
	{
		printf("You are pass\n");
	}
	else
	{
		printf("You are fail\n");
	}
	return 0;
}
