#include <stdio.h>

// Constant Variables (AGAIN)
const double var1 = 15.47;
const double var2 = 35.15;

// Let's try to print a memory address of these constant variables
void printVar1();
void printVar2();

int main(void) {

    // Lets also define a Local Variable (Stack Memory)
    double var3 = 15.00;

    // We can also print its memory address
    printf("Memory address of the local variable 'var3' which has a value of %.2lf: %p\n\n", var3, &var3);
    printVar1();
    printVar2();

    return 0;
}


// Function definitions
void printVar1() {
    printf("Memory address of the global variable 'var1' which has a value of %.2lf: %p\n", var1, &var1);
}

void printVar2() {
    printf("Memory address of the global variable 'var2' which has a value of %.2lf: %p\n\n", var2, &var2);
}