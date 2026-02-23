#include <stdio.h>

// lets use functions to iterate each values of double and int arrays
// lets include the pointer of each datatypes and its size
void loopDouble(double* ptr, int size);
void loopInt(int* ptr, int size);

int main(void) {

    // define an array of double and int
    // since int has an byte size of 4 and double has a byte size of 8
    // we can try to user pointers inside loops to print out the values rather than making another copy of variable in the memory
    double percentage[5] = {20.0, 25.0, 30.0, 35.9, 40.50};
    int numbers[5] = {35, 25, 15, 7, 18};

    //We can get the size of the function

    // lets try to use functions to run these
    loopDouble(ptrP);
    loopInt(ptrI);

    return 0;
}

void loopDouble(double* ptr) {
    // lets store the initial value of the pointer that it is pointing to
    double tmp = *ptr;

    // lets start the loop iteration
    for (int i = 0; i < 5; i++) {
        printf("The index [%d] which holds a value of: %.2lf\n", i, *ptr);
        ptr++;
    }

    printf("This is the value of the temporary variable inside of the fuction: %.2lf\n", tmp);
}

void loopInt(int* ptr) {
    // Lets do a pointer arithmetic for this one
    printf("This is the second box in the array: %d", *(ptr +1));
}