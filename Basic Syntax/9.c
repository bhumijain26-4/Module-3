/*Find circumference of Triangle formula : triangle = a + b + c */

#include<stdio.h>
int main()
{
	int a,b,c,circum;
	printf("Enter A\n");
	scanf("%d",&a);
	printf("Enter B\n");
	scanf("%d",&b);
	printf("Enter C\n");
	scanf("%d",&c);
	
	circum=a+b+c;
	
	printf("\nCircumference of Triangle is:%d",circum);
	
	return 0;
}
