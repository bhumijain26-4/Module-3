/*Find area of Rectangle Formula : A=wl*/

#include<stdio.h>
int main()
{
	int w,l,area;
	printf("Enter Width\n");
	scanf("%d",&w);
	printf("Enter Length\n");
	scanf("%d",&l);
	area=w*l;
	printf("Area of Rectangle is:%d",area);
	
	return 0;
}
