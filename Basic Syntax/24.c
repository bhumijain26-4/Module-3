/*Accept 5 employees name and salary and count average and total salary*/
#include<stdio.h>
int main()
{
  int e1,e2,e3,e4,e5,Avg,total=0,sum=0;
  printf("\nEmployee Name is:Raj Sharma\n");
  printf("Enter Raj's salary\n");
  scanf("%d",&e1);
    
  printf("\nEmployee Name is:Ritu Jain\n");
  printf("Enter Ritu's salary\n");
  scanf("%d",&e2);
  
  printf("\nEmployee Name is:Mahi Aggrawal\n");
  printf("Enter Mahi's salary\n");
  scanf("%d",&e3);
  
  printf("\nEmployee Name is:Rajat Shah\n");
  printf("Enter Rajat's salary\n");
  scanf("%d",&e4);
  
  printf("\nEmployee Name is:Ashi Ranka\n");
  printf("Enter Ashi's salary\n");
  scanf("%d",&e5);
  
  sum = e1+e2+e3+e4+e5;
  total = total+sum;
  Avg = total/5;
  
  printf("Total salary is: %d\n",total);
  printf("Average salary is: %d\n",Avg);
  
 return 0;
}

