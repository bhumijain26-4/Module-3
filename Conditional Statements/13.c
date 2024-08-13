/*WAP to find minimum number among 3 numbers using ternary operator*/
#include<stdio.h>
int main()
{
	int a,b,c,min;
	printf("\nEnter A: ");
	scanf("%d",&a);
	printf("\nEnter B: ");
	scanf("%d",&b);
	printf("\nEnter C: ");
	scanf("%d",&c);
	
	min = (a<b) ? (a<c ? a:c):(b<c ? b:c);
	printf("\nThe minimum number among %d %d and %d is %d",a,b,c,min);
	return 0;
}
