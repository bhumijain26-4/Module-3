/*WAP to find number is even or odd using ternary operator*/
#include<stdio.h>
int main()
{
	int num,a;
	printf("Enter any number\n");
	scanf("%d",&num);
	a=num%2==0?printf("%d is Even",num):("%d is Even",num);
	a=num%2!=0?printf("%d is Odd",num):("%d is Odd",num);
	return 0;
}
