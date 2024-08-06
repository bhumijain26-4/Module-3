/*Calculate compound interest (Compound Interest formula:
a.Formula to calculate compound interest annually is given by:Amount= P(1 + R/100)t
b.Compound Interest = Amount – P*/
#include<stdio.h>
int main()
{
	int p,r,t,A;
	printf("Enter the amount for prinicipal\n");
	scanf("%d",&p);
	printf("Enter the amount for rate of interest\n");
	scanf("%d",&r);
	printf("Enter the time period\n");
	scanf("%d",&t);
	A=p*(1+r/100)*t;
	
	printf("Compound Interest is = %d\n",A);
	
	
	return 0;
}

