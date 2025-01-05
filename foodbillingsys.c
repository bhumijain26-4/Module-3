#include<stdio.h>
//function to  display food items with their prices.
void displaymenu()
{
	printf("------------------------------");
	printf("\n------ Menu ------\n");
	printf("------------------------------\n");
	printf("1.Burger	price = 120rs/pcs\n");
	printf("2.Pizza		price = 150rs/pcs\n");
	printf("3.Pasta		price = 130rs/plate\n");
	printf("4.Frankie	price = 110rs/pcs\n");
	printf("5.Coke		price = 100rs/pcs\n");
	printf("\n");
}
//function to calculate the total bill on items and quantity selected.
double total(double totalbill,double price,int quantity)
{
	return totalbill + (price * quantity);
}
int main()
{
  int choice,quantity;
  char items;
  double totalbill;
  printf("-----------------------------------------------\n");
  printf("Welcome to the Food Billing System\n");
  printf("-----------------------------------------------\n");
  do
  {
  	displaymenu();
  	printf("Enter the number of item you want to order: ");
  	scanf("%d",&choice);
  	if(choice<1||choice>6)
  	{
  	 printf("Invalid choice!Please select again from 1-5.");
	 continue;	
    }
    printf("Enter the quantity: ");
    scanf("%d",&quantity);
     
    double price = 0.0;
    
    switch(choice)
    {
    	case 1: 
		price = 120.0;
    	break;
    	
    	case 2: 
		price = 150.0;
    	break;
    	
    	case 3: 
		price = 130.0;
    	break;
    	
    	case 4: 
		price = 110.0;
    	break;
    	
    	case 5: 
		price = 100.0;
    	break;
	}
  	
  	totalbill = total(totalbill,price,quantity);
  	
  	printf("Do u want to select more items? (Y/N): ");
  	getchar();
  	scanf(" %c",&items);
  }while(items=='Y'||items=='y');
  
  printf("\n--- Total Bill ---\n");
  printf("Total amount to Pay: %.2f rs\n",totalbill);
  printf("Thank you for your order!");
  	
  return 0;	
  	
}

