/*Accept 5 expense from user and find average of expense*/

#include<stdio.h>
int main()
{
  int a,b,c,d,e,avg=0,total=0;
  printf("Enter user1's expense: \n");
  scanf("%d",&a);
  
  printf("Enter user2's expense: \n");
  scanf("%d",&b);
  
  printf("Enter user3's expense: \n");
  scanf("%d",&c);
  
  printf("Enter user4's expense: \n");
  scanf("%d",&d);
  
  printf("Enter user5's expense: \n");
  scanf("%d",&e);
  
total=a+b+c+d+e;
avg=total/5;

printf("Average is: %d\n",avg);
 return 0;
}

