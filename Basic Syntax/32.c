/*Accept 2 numbers and find out its sum check it size*/
#include<stdio.h>
int main()
{
   int num1,num2,sum;
   printf("\nEnter the first number: ");
   scanf("%d",&num1);
   printf("\nEnter the second number: ");
   scanf("%d",&num2);
   sum = num1 + num2;
   printf("\nThe sum of %d and %d is %d",num1,num2,sum);
   printf("\nThe size of sum is %d bytes",sizeof(sum));
	return 0;
}
