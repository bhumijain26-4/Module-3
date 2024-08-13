/*WAP to find maximum number among 3 numbers using ternary operator*/
#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("\nEnter A: ");
	scanf("%d",&a);
	printf("\nEnter B: ");
	scanf("%d",&b);
	printf("\nEnter C: ");
	scanf("%d",&c);
	
	max = (a>b) ? (a>c ? a:c):(b>c ? b:c);
	printf("\nThe maximum number among %d %d and %d is %d",a,b,c,max);
	
	return 0;
}
