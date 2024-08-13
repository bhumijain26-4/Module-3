/*Find circumference of Rectangle formula : C = 2l+2w*/

#include<stdio.h>
int main()
{
	int l,circum,w;//length=l,width=w
	printf("Enter Length\n");
	scanf("%d",&l);
	printf("Enter Width\n");
	scanf("%d",&w);

	circum=(2*l)+(2*w);
	printf("Circumference of Rectangle is:%d",circum);
	
	return 0;
}
