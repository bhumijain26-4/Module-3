/*Write a C program to read the value of an integer m and display the 
value of n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is 
less than 0*/
#include<stdio.h>
int main()
{
	int m,n;
	printf("\nEnter any value: ");
	scanf("%d",&m);
	if(m>0){
		 n = 1;
	}
	else if(m==0)
	{
		 n = 0;
	}
	else{
		n = -1;
	}
	printf("\nThe value of n is %d",n);
	return 0;
}
