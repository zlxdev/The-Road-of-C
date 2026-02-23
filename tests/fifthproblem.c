#include <stdio.h>

int main(void) {

    double usd;
    printf("Enter your money in USD: ");
    scanf("%lf", &usd);

    double euro = usd * 0.92;
    double jp_yen = usd * 150.00;

    printf("Your initial money in USD is: %.2lf\n", usd);
    printf("Your converted money in Euro is: %.2lf\n", euro);
    printf("Your converted money in JP Yen is: %.2lf\n", jp_yen);

    return 0;
}