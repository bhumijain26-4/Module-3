/*WAP to accept the height of a person in centimeters and categorize the 
person according to their height.*/
#include<stdio.h>
int main()
{
	float height;
	printf("\nEnter your height: ");
	scanf("%f",&height);
	
	if(height<150)
	{
		printf("\nYour height is %.2f so you are short",height);
	}
	else if(height>=150 && height<=170)
	{
		printf("\nYour height is %.2f so you are an Average",height);
	}
	else
	{
		printf("\nYour height is %.2f so you are Tall",height);
	}
	return 0;
}
