/*Accept monthly salary from the user and deduct 10% insurance premium,
 10% loan installment find out of remaining salary.*/
#include<stdio.h>
int main()
{
	float salary,insurance,install,remaining;
	printf("\nEnter Salary: ");
	scanf("%f",&salary);
	insurance = 0.10*salary;
	install = 0.10*salary;
	remaining = salary - (insurance + install);
	printf("\nInsurance Premium = %.2f",insurance);
    printf("\nLoan Installment = %.2f",install);
    printf("\nRemaining salary = %.2f",remaining);
	return 0;
}
