/*Convert temperature Fahrenheit to Celsius*/
#include<stdio.h>
int main()
{
	 float Fahrenheit, Celsius;  
	 printf("\nEnter Fahrenheit: ");
	 scanf("%f",&Fahrenheit);  
     Celsius = ((Fahrenheit-32)*5)/9;  
     printf("\nTemperature in Celsius is : %.2f",Celsius);  
	return 0;
}
