/*Calculate person’s insurance premium based on salary*/
#include<stdio.h>
int main()
{
	float sal,premium_rate,insurance;
	printf("\nEnter your salary: ");
	scanf("%f",&sal);
	printf("\nEnter Insurance Premium rate: ");
	scanf("%f",&premium_rate);
	insurance = sal*(premium_rate/100);
	printf("\nThe insurance premium is %.2f",insurance);
   return 0;
}

