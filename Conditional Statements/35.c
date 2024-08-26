/*Accept the input month number and print number of days in that month.*/
#include<stdio.h>
int main()
{
	int month;
	printf("\nEnter month number to print number of days: ");
	scanf("%d",&month);
	if(month==1)
	{
		printf("\n31 Days");
	}
	else if(month==2)
	{
		printf("\n28 or 29 Days");
	}
	else if(month==3)
	{
		printf("\n31 Days");
	}
	else if(month==4)
	{
		printf("\n30 Days");
	}
	else if(month==5)
	{
		printf("\n31 Days");
	}
  else if(month==6)
	{
		printf("\n30 Days");
	}
   else if(month==7)
	{
		printf("\n31 Days");
	}
	else if(month==8)
	{
		printf("\n30 Days");
	}
	else if(month==9)
	{
		printf("\n31 Days");
	}
	else if(month==10)
	{
		printf("\n30 Days");
	}
	else if(month==11)
	{
		printf("\n31 Days");
	}
	else if(month==12)
	{
		printf("\n30 Days");
	}
	else{
		printf("\nInvalid Input!Please enter month number between 1-12");
	}
	return 0;
}
