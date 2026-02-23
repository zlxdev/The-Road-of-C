#include <stdio.h>

// Were doing normal stuff since im experimenting on incrementing and decrementing the array
// So no global var but well use functions
// So were still gonna do function prototypes

void incrementArr(int* n, int size);
void decrementArr(int* n, int size);

int main(void) {

    int numArr[] = {35, 40, 45, 50, 55, 60, 65, 
                    70, 75, 80, 85, 90, 95, 100};

    int* arrPtr = numArr;
    int size = sizeof(numArr) / sizeof(numArr[0]);
    
    printf("Here are the values for incrementing the array: \n");
    incrementArr(arrPtr, size);
    printf("\nNow, here are the values for decrementing the array: \n");
    decrementArr(arrPtr, size);

    return 0;
}

void incrementArr(int* n, int size) {

    for (int i = 0; i < size; i++) {
        printf("Index [%d] with a number of: %d\n", i, n[i]);
    }
}

void decrementArr(int* n, int size) {

    int s = size - 1;
    for (int i = s ;i >= 0; i--) {
        printf("Index [%d] with a number of: %d\n", i, n[i]);
    }
}
