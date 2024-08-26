/*Write a C program to read temperature in centigrade and display a suitable
message according to the temperature state below:
Temp < 0 then Freezing weather Temp 0-10 then Very Cold weather Temp 10-20 
then Cold weather Temp 20-30 then Normal in Temp Temp 30-40 then Its Hot
Temp >=40 then Its Very Hot*/
#include<stdio.h>
int main()
{
	int temp;
	printf("\nEnter Temperature: ");
	scanf("%d",&temp);
	
	if(temp<0)
	{
		printf("\n%d is Freezing weather",temp);
	}
	else if(temp>=0 && temp<=10)
	{
		printf("\n%d is very Cold weather",temp);
	}
	else if(temp>=10 && temp<=20)
	{
		printf("\n%d is Cold weather",temp);
	}
	else if(temp>=20 && temp<=30)
	{
		printf("\n%d is Normal Temperature",temp);
	}
	else if(temp>=30 && temp<=40)
	{
		printf("\n%d is Hot Temperature",temp);
	}
	else
	{
		printf("\n%d is very Hot Temperature",temp);
	}
	return 0;
}
