/*If bill exceeds Rs. 800 then a surcharge of 18% will be charged and the 
minimum bill should be of Rs. 256/-*/
#include <stdio.h>
int main() {
    float bill, finalAmount;
    printf("Enter the bill amount: ");
    scanf("%f", &bill);
    if (bill < 256) {
        printf("The bill amount must be at least Rs. 256.\n");
        return 1;
    }
    if (bill > 800) {
        finalAmount = bill + (bill * 0.18);
    } else {
        finalAmount = bill;
    }
    printf("The final amount to be paid is Rs. %.2f\n", finalAmount);

    return 0;
}

