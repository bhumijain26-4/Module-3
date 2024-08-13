/*Calculate compound interest*/
#include<stdio.h>
int main()
{
	float Amount,total,r,p;
	int n,t;
	printf("\nEnter Principal: ");
	scanf("%f",&p);
	printf("\nEnter Rate of interest: ");
	scanf(" %f",&r);
	printf("\nEnter number of times: ");
	scanf("%d",&n);
	printf("\nEnter period of time: ");
	scanf("%d",&t);
	Amount = p*(1+r/n)*t;
	printf("\nCompound Interest is: %.2f",Amount); 
		
	return 0;
}
