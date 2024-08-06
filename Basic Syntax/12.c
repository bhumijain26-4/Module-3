/*Accept number of students from user. 
I need to give 5 apples to each student. How many apples are required?*/

#include<stdio.h>
int main(){
	int a,ans;
	printf("Enter number of students\n");
	scanf("%d",&a);
	ans=a*5;
	printf("Total number of apples required is:%d\n",ans);
	
	
	return 0;
}
