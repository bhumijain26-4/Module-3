/*Find area of Triangle Formula : A = 1/2 × b × h*/

#include<stdio.h>
int main()
{
	float b,h,area;
	printf("Enter Breadth\n");
	scanf("%f",&b);
	printf("Enter Height\n");
	scanf("%f",&h);
	area=(b*h)/2;
	printf("Area of triangle is:%.2f",area);
	
	return 0;
}
