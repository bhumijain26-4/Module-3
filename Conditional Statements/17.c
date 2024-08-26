/*Write a C program to check whether a triangle can be formed with the 
given values for the angles.*/
#include<stdio.h>
int main()
{
	int angle1,angle2,angle3;
	printf("\nEnter the First Angle: ");
	scanf("%d",&angle1);
	printf("\nEnter the Second Angle: ");
	scanf("%d",&angle2);
	printf("\nEnter the Third Angle: ");
	scanf("%d",&angle3);
	if(angle1+angle2+angle3==180)
	{
		printf("\nTriangle can be formed");
	}
     else{
     	printf("\nTriangle can not be formed");
	 }

	return 0;
}
