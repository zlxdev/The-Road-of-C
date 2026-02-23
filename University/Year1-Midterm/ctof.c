#include <stdio.h>

int main() {

    double celsius;
    printf("Enter celsius: ");
    scanf("%lf", &celsius);

    double fahrenheit = (celsius * 9/5) + 32;
    printf("The converted result of celsius(%.3lf) to fahrenheit is: %.2lf\n", celsius, fahrenheit);
    return 0;
}