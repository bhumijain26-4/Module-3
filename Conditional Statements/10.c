/*WAP to check whether a number is negative, positive or zero*/
#include<stdio.h>
int main()
{
	int num;
	printf("Enter any number\n");
	scanf("%d",&num);
	if(num>0)
	{
		printf("It is Positive number\n",num);
	}
	else if(num<0)
	{
		printf("It is Negative number\n",num);
	}
	else
	{
		printf("It is Zero\n",num);
	}
	return 0;
}
