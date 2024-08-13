/*WAP to calculate swap 2 numbers with using of multiplication 
and division.*/
#include<stdio.h>
int main()
{
	int num1,num2,temp;
	printf("\nEnter number1: ");
	scanf("%d",&num1);
	printf("\nEnter number2: ");
	scanf("%d",&num2);
	printf("\nNumber1 before swapping:%d",num1);
    printf("\nNumber2 before swapping:%d",num2);

    num1 = num1*num2; 
    num2 = num1/num2;
    num1 = num1/num2;
    printf("\nNumber1 after swapping:%d",num1);
    printf("\nNumber2 after swapping:%d",num2);
	
	return 0;
}
