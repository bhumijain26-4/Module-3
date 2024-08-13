/*C Program to Check Uppercase or Lowercase or Digit or Special Character*/
#include<stdio.h>
#include<string.h>
int main()
{
	char name[100];
	printf("\nEnter your name: ");
	gets(name);
	if(name==strupr(name))
	{
		printf("\nIt is uppercase");
	}
	else if(name==strlwr(name))
	{
		printf("\nIt is lowercase");
	}
	
	return 0;
}
