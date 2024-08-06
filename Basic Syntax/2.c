/*Write a program to make Simple calculator (to make addition, subtraction, multiplication, division and modulo)*/

#include<stdio.h>
int main()
{
	int num1,num2,ans;
	
	//Addition
	printf("\nEnter the value of num1= ");
	scanf("%d",&num1);
	printf("Enter the value of num2= ");
	scanf("%d",&num2);
	ans=num1+num2;
	printf("The Addition of %d and %d is %d\n",num1,num2,ans);
	
	
	//Subtraction
    printf("\nEnter the value of num1= ");
	scanf("%d",&num1);
	printf("Enter the value of num2= ");
	scanf("%d",&num2);
	ans=num2-num1;
	printf("The Subtraction of %d and %d is %d\n",num1,num2,ans);
     
     
    //Multiplication
    printf("\nEnter the value of num1= ");
	scanf("%d",&num1);
	printf("Enter the value of num2= ");
	scanf("%d",&num2);
	ans=num1*num2;
	printf("The Multiplication of %d and %d is %d\n",num1,num2,ans);
     
    //Division
    printf("\nEnter the value of num1= ");
	scanf("%d",&num1);
	printf("Enter the value of num2= ");
	scanf("%d",&num2);
	ans=num1/num2;
	printf("The Division of %d and %d is %d\n",num1,num2,ans);
	
	
	//Remainder
	printf("\nEnter the value of num1= ");
	scanf("%d",&num1);
	printf("Enter the value of num2= ");
	scanf("%d",&num2);
	ans=num1%num2;
	printf("The Remainder of %d and %d is %d\n",num1,num2,ans);
     
    return 0;
     
}

