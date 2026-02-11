#include <stdio.h>

int main(void) {

    int num1 = 50;
    int* p = &num1;

    printf("The memory address of %d is: %p\n", num1, p);

    return 0;
}