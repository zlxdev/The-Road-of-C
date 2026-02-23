#include <stdio.h>

int main(void) {
    
    double grossSalary;
    printf("Enter gross salary: ");
    scanf("%lf", &grossSalary);

    double tax = grossSalary * 0.12;
    double philHealth = grossSalary * 0.05;
    double pagIbig = grossSalary * 0.03;
    double sss = grossSalary * 0.01;
    double afterTax = tax + philHealth + pagIbig + sss;
    double netSalary = grossSalary - afterTax;

    printf("The overall salary after taxation is: %.2lf\n", netSalary);
    return 0;
}