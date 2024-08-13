/*Accept 2 numbers from user and swap 2 numbers with using of 3rd variable*/
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

    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("\nNumber1 after swapping:%d",num1);
    printf("\nNumber2 after swapping:%d",num2);
	return 0;
}
