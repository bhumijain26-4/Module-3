/*WAP to Find Area And Circumference of Circle*/

#include<stdio.h>
int main()
{
	float area,circum,r;
	printf("Enter the value of Radius\n");
	scanf("%f",&r);
	printf("Radius is:%.3f\n",r);
	area=3.14*r*r;
	circum=2*3.14*r;
	printf("Area of circle is:%.3f\n",area);
	printf("Circumference of Circle is:%.2f\n",circum);
	
	return 0;
}
