/*Accept month number and display month name*/
#include<stdio.h>
int main()
{
	int choice;
	printf("\nEnter any month number to display its name\n");
	printf("\nEnter any number: ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("\nMonth is January");
			break;
		case 2:
			printf("\nMonth is February");
			break;
        case 3:
			printf("\nMonth is March");
			break;
        case 4:
			printf("\nMonth is April");
			break;
        case 5:
			printf("\nMonth is May");
			break;
        case 6:
			printf("\nMonth is June");
			break;
        case 7:
			printf("\nMonth is July");
			break;
         case 8:
			printf("\nMonth is August");
			break;
        case 9:
			printf("\nMonth is September");
			break;
        case 10:
			printf("\nMonth is October");
			break;
		case 11:
			printf("\nMonth is November");
			break;
		case 12:
			printf("\nMonth is December");
			break;
		
	}
	return 0;
}
