/*WAP to accept two integers and check whether they are equal or not*/
#include<stdio.h>
int main()
{
	int num1,num2;
	printf("Enter number1\n");
	scanf("%d",&num1);
	printf("Enter number2\n");
	scanf("%d",&num2);
	if(num1==num2)
	{
		printf("They are equal numbers\n");
	}
	else
	{
	  printf("They are not equal numbers\n");	
	}
	
	
	return 0;
}
