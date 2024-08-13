/*Calculate person’s Annual salary*/
#include<stdio.h>
int main()
{
	int salary,hra,da,total;
	printf("\nEnter your salary: ");
	scanf("%d",&salary);
	printf("\nEnter DA: ");
	scanf("%d",&da);
	hra = da+(salary*0.10);
	total = salary+da+hra;
	printf("\nAnnual salary is %d",total);
	
	
	return 0;
}
