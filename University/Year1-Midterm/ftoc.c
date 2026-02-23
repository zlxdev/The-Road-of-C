#include <stdio.h>

int main(void) {

    double fahrenheit;
    printf("Enter fahrenheit: ");
    scanf("%lf", &fahrenheit);

    double celsius = (fahrenheit - 32) * 5/9;
    printf("The converted result of fahrenheit (%.2lf) to celsius is: %.2lf\n", fahrenheit, celsius);
    return 0;
}