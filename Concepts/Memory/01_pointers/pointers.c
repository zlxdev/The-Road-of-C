#include <stdio.h>

int main(void)
{
    int age;
    int* ptrAge = &age;

    printf("Enter your age: ");
    scanf("%d", &age);
    printf("The current memory address of the integer is: %p\n", ptrAge);

    return 0;
}