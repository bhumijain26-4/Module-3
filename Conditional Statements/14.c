/*WAP to find the largest of three numbers.*/
#include<stdio.h>
int main()
{
	int num1,num2,num3;
	printf("Enter number1\n");
	scanf("%d",&num1);
	printf("Enter number2\n");
	scanf("%d",&num2);
	printf("Enter number3\n");
	scanf("%d",&num3);
	if(num1>num2)
	{
		if(num1>num3)
		{
			printf("%d is Largest number\n",num1);
		}
	}
	if(num3>num2)
	{
		if(num3>num1)
		{
			printf("%d is Largest number\n",num3);
		}
	}
	else
	{
		printf("%d is Largest number\n",num2);
	}
	
	
	
	return 0;
}
