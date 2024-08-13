/*C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)*/
#include<stdio.h>
int main()
{
	int num;
	printf("\nEnter any Integer: ");
	scanf("%d",&num);
	int power1 = num;
	int power2 = num*num;
	int power3 = num*num*num;
	printf("%d^1 = %d\n",num,power1);
	printf("%d^2 = %d\n",num,power2);
	printf("%d^3 = %d\n",num,power3);
	
	return 0;
}
