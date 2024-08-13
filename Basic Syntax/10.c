/*find the area of a rectangular prism formula : A=2(wl+hl+hw)*/

#include<stdio.h>
int main()
{
	int w,l,h,area;
	printf("Enter Width\n");
	scanf("%d",&w);
	printf("Enter Length\n");
	scanf("%d",&l);
	printf("Enter Height\n");
	scanf("%d",&h);
	
	area=2*(w*l)+(h*l)+(h*w);
	
	printf("\nArea of Rectangular Prism is:%d",area);
	
	return 0;
}
