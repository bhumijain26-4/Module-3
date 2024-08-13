/*Convert country’s name in abbreviate form*/
#include<stdio.h>
int main()
{
	char cntname[100];
	printf("\nEnter the Country's name: ");
	scanf("%s",cntname);
	printf("Abbreviated Name : ");
	printf(" %c. %s",cntname);	
   return 0;
}

