/*WAP to print factorial of given number*/
#include<stdio.h>
int main()
{
	int a,i,fact;
	printf("Enter any number to find out Factorial\n");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		fact=fact*i;
	}
	printf("Factorial of %d is:%d",a,fact);
	
	
	
	
	return 0;
}
