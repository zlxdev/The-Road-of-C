#include <stdio.h>

int main(void) {

    int size;
    printf("Enter the size of your array: ");
    scanf("%d", &size);

    int numArr[size];
    int* numPtr = numArr;

    for (int i = 0; i < size; i++) {
        printf("Enter your value for each index[%d]: ", i);
        scanf("%d", numPtr + i);
    }

    for (int i = 0; i < size; i++) {
        printf("\nHere is the value of your array:\nIndex [%d] with the value of [%d]\nwith a Memory Address of: %p\n\n", i, *numPtr, numPtr);
        numPtr++;
    }

    return 0;
}