/*WAP to check if the given year is a leap year or not.*/
#include<stdio.h>
int main()
{
	int a;
	printf("Enter any year\n");
	scanf("%d",&a);
	if(a%4==0){
		printf("It is a leap year");
	}
	else{
		printf("It is not a leap year");
	}
}
