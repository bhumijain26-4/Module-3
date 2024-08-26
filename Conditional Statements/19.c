/*Write a program in C to calculate and print the electricity bill of a given customer. The customer ID, name, and unit consumed by the user should be captured from the keyboard to display the total amount to be paid to the customer. The charge are as follow :
20. Unit        21. Charge/unit
upto 350            @1.20 
350 and above but   @1.50
less than 600 
600 and above but   @1.80 
less than 800       @2.00
800 and above
*/
#include<stdio.h>
int main()
{
	char name[100];
	int id,total;
	float unit;
	printf("\nEnter your name: ");
	gets(name);
	printf("\nEnter your ID: ");
	scanf("%d",&id);
	printf("\nEnter Units: ");
	scanf("%f",&unit);
	
	if(unit>=350)
	{
		total = unit * 1.20;
	}
	else if(unit>=350 && unit<650)
	{
		total = unit * 1.50;
	}
	else if(unit>=600 && unit<800)
	{
		total = unit * 1.80;
	}
	else if(unit>=800)
	{
		total = unit * 2.00;
	}
	
	printf("\nElectricity Bill details: ");
	printf("\nCustomer ID:%d",id);
	printf("\nCustomer Name:%s",name);
	printf("\nCustomer Unit:%.2f",unit);
	printf("\nTotal Bill Amount:%.2f",total);
	return 0;
}
