/*WAP to show i.Monday to Sunday using switch case*/
#include<stdio.h>
int main()
{
	int day;
	printf("Enter the day number\n");
	scanf("%d",&day);
	switch(day){
	case 1:
		printf("Today is monday\n");
		break;
	case 2:
		printf("Today is Tuesday\n");
		break;
	case 3:
		printf("Today is Wednesday\n");
		break;
	case 4:
		printf("Today is Thursday\n");
		break;
	case 5:
		printf("Today is Friday\n");
		break;
	case 6:
		printf("Today is Saturday\n");
		break;
	case 7:
		printf("Today is Sunday\n");
		break;
	default:
		printf("Invalid Input!!There are only 7 days in a week\n");
	return 0;
}
}
