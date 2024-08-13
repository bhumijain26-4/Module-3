/*Convert days into months*/
#include<stdio.h>
int main()
{ 
    int days,months;
    printf("\nEnter Days: ");
    scanf("%d",&days);
	days = days%30;
	months = days/30;
	printf("\nMonths = %d Days = %d",months,days);
	return 0;
}
