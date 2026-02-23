#include <stdio.h>
int main(){

    float fareinheit = 110.54;
    float result;

    result = 0.5 * (fareinheit - 32);
    printf("The result of the conversion of Fahrenheit to Celsius is: %.2f\n", result);

    return 0;
}