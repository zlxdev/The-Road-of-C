#include <stdio.h>

//define global variable
const double PI = 3.1419;

// lets build a good habits by using functions and using function declaration
void calculateAreaofcircle(double* r);

// Initialize main program
int main(void){

    // define variable and the pointer
    double radius = 0;
    double* ptR = &radius;

    // if validator to check whether the user enters a number or not
    printf("Enter your radius: ");
    if (scanf("%lf", &radius) != 1) {
        printf("Error: Please enter a valid number.\n");
        return 1;
    }

    // checks if the value of the memory address the pointer is pointing to not zero
    if (*ptR <= 0) {
        printf("Error: Number should be greater than zero.\n");
        return 1;
    }

    printf("The value of radius is: %.2lf\n", *ptR);
    printf("And the memory adress of it is: %p\n\n", ptR);

    calculateAreaofcircle(ptR);



    return 0;
}

void calculateAreaofcircle(double* r) {
    const double* ptrPI = &PI;
    double result = *ptrPI * *r * *r;

    printf("The result is: %.2lf\n", result);
    printf("Location of the result in the memory address: %p", &result);
}