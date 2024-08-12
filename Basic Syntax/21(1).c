/*Accept 2 numbers from user and swap 2 numbers without using of 3rd variable*/
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("\nEnter number1: ");
	scanf("%d",&num1);
	printf("\nEnter number2: ");
	scanf("%d",&num2);
	printf("\nNumber1 before swapping:%d",num1);
    printf("\nNumber2 before swapping:%d",num2);
    
    num1 = num1+num2;//12 = 35
    num2 = num1-num2;//23 = 35-23 = 12
    num1 = num1-num2;//35-12 = 23
    printf("\nNumber1 after swapping:%d",num1);
    printf("\nNumber2 after swapping:%d",num2);	
	return 0;
}
