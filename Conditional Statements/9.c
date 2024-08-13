/*C Program to Check Uppercase or Lowercase or Digit or Special Character*/
#include<stdio.h>
#include<string.h>
int main()
{
   char ch;
   printf("\nEnter a character: ");
   scanf(" %c",&ch);
   if(ch>='A' && ch<='Z')
   {
   	printf("\n%c is an Uppercase character",ch);
   }
    else if(ch>='a' && ch<='z')
   {
   	printf("\n%c is Lowercase character",ch);
   }
    else if(ch>='0' && ch<='9')
   {
   	printf("\n%c is a Digit",ch);
   }
    else
   {
   	printf("\n%c is a Special Character",ch);
   }
   return 0;
}
