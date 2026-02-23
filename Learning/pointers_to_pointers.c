#include <stdio.h>

int main(void) {

    // declare variable using doubles
    double digit;
    double* digitPtr = &digit;
    // use a ptr-to-ptr to referrence the actual pointer itself and its memory address as a value
    double** digitPptr = &digitPtr;

    printf("Enter a number: ");
    scanf("%lf", &digit);

    // printing normal variables the normal-way
    printf("Here is the value of the digit using normal referrence: %.2lf\n", digit);
    printf("Here is the memory address of the variable using a normal ampersand sign: %p\n\n", &digit);
    // printing its value and memory address using pointers
    printf("Here is the value of digit using pointers: %.2lf\n", *digitPtr);
    printf("Here is also the memory address that the pointer is holding to: %p\n\n", digitPtr);
    // printing the value of which the pointer is pointing to, but then prints the actual memory address of the pointer rather than the variable that they are pointing to
    printf("Here is the value of digit using Pointer-to-Pointers: %.2lf\n", **digitPptr);
    printf("Here is also the memory address of the pointer itself which this pointer is pointing to: %p", digitPptr);

    return 0;
}