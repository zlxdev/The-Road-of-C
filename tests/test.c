#include <stdio.h>

void findnumArr(int* p, int t, int size);

int main(void) {

    int numArr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 15, 20, 25, 30, 35};
    int size = sizeof(numArr) / sizeof(numArr[0]);
    int target = 30;

    findnumArr(numArr, target, size);
    return 0;
}

void findnumArr(int* p, int t, int size) {
    int* end = p + size;
    while((*p != t) && (p < end)) {

        printf("Checking the address [%p] which holds the value of [%d] for target value: %d\n", p, *p ,t);
        p++;
    }

    if (p < end) {
        printf("The number %d was found at the Address [%p]\n", *p, p);
    } else {
        printf("We could not found your number inside\n");
    }
}