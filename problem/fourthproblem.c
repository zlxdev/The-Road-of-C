#include <stdio.h>

int main(void) {

    double hourly_rate, hours_worked, tax_rate;
    printf("Enter your hourly pay: ");
    scanf("%lf", &hourly_rate);
    printf("How many hours have you worked?: ");
    scanf("%lf", &hours_worked);
    printf("Enter your tax (In Decimals): ");
    scanf("%lf", &tax_rate);

    double gross_pay = hourly_rate * hours_worked;
    double tax_amount = gross_pay * tax_rate;
    double net_pay = gross_pay - tax_amount;

    printf("Your calculated daily gross pay is: %.2lf\n", gross_pay);
    printf("Your daily pay after tax is: %.2lf\n", net_pay);
    return 0;   
}