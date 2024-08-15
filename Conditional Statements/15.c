/*Write a C program to determine eligibility for admission to a professional
course based on the following criteria Eligibility Criteria : Marks in 
Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50 and Total in all 
three subject >=190 or Total in Maths and Physics >=140 ---------Input the
marks obtained in Physics :65 Input the marks obtained in Chemistry :51 
Input the marks obtained in Mathematics :72 Total marks of Maths, Physics 
and Chemistry : 188 Total marks of Maths and Physics : 137 The candidate 
is not eligible.*/
#include<stdio.h>
int main()
{
	int maths,phy,chem,marks,total,total_m_p;
	printf("\nEnter your Maths marks: ");
	scanf("%d",&maths);
	printf("\nEnter your Physics marks: ");
	scanf("%d",&phy);
	printf("\nEnter your Chemistry marks: ");
	scanf("%d",&chem);
	printf("\nEnter the total marks of Maths,Physics and Chemistry: ");
	scanf("%d",&total);
	printf("\nEnter the total marks of Maths and Physics: ");
	scanf("%d",&total_m_p);
	
	if((maths>=65 && phy>=55 && chem>=50 && total>=190) || (total_m_p>=140))
	{
		printf("\nThe Candidate is eligible");
	}
     else
     {
     	printf("\nThe Candidate is not eligible");
	 }
	return 0;
}
