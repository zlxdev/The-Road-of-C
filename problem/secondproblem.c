#include <stdio.h>

int main(void) {

    double hours;
    printf("Enter your daily work hours: ");
    scanf("%lf", &hours);

    double weekly_hours = hours * 5;
    double yearly_hours = hours * 252;

    printf("The accumulated hours worked in a week is: %.2lf\n", weekly_hours);
    printf("The accumulated work hours yearly (252-day) is: %.2lf\n", yearly_hours);

    return 0;
}