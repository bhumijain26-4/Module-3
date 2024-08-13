/*Find the Character Is Vowel or Not*/
#include<stdio.h>
int main()
{
	char c;
	int a,e,i,o,u,A,E,I,O,U;
	printf("Enter any character\n");
	scanf(" %c",&c);
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
    {
	    printf("%c is a vowel\n",c);
    }
	else
	{
		printf("%c is not a vowel\n",c);
	}
	
	
	
	return 0;
}
