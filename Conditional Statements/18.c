/*Write a C program to calculate profit and loss on a transaction.*/
#include<stdio.h>
int main()
{
	float cp,sp,loss,profit;
	printf("\nEnter Cost Price: ");
	scanf("%f",&cp);
	printf("\nEnter Selling Price: ");
	scanf("%f",&sp);
	if(sp>cp)
	{
		profit = sp-cp;
		printf("\nProfit is %.2f",profit);
	}
     else if(sp<cp)
     {
     	loss = cp-sp;
     	printf("\nLoss is %.2f",loss);
	 }
	 else
	 {
	 	printf("\nno Profit no Loss");
	 }
	
	return 0;
}
