#include <stdio.h>

// No global variables this time

// But were still gonna use functions for habit building (modularity)
void pointerinFunction();
void changeValues(int *p1, int *p2);

int main(void) {

    // Set a local variable
    int var1 = 15;
    int var2 = 35;

    // A function that executes its definitions
    pointerinFunction();

    // Lets print and change the values of the local variables weve set before
    printf("The values of var1 and var2 before changing: %d(var1) %d(var2)\n", var1, var2);
    // Lets change it by creating a function and using ampersand '&' to assign its memory address not the value of it
    // So that the function will use pointers to dereferrence it and do its logic to change both values
    changeValues(&var1, &var2);

    // Prints the after result
    printf("The values of var1 and var2 after changing: %d(var1) %d(var2)\n", var1, var2);

    return 0;
}

// We use pointer of var1 (*p1) and pointer of var2 (*p2)
void changeValues(int *p1, int *p2) {
    // Then we can use a temporary variable to store the content inside of that address in the first pointer
    int tmp = *p1;
    // Then we start changing the moving the values and exchanging it with the other house (like moving number 15 from p1 to p2)
    *p1 = *p2;
    // After moving the first item, the first house (this case its p1) is empty, so we move the extra existing content (value) of the second house
    // to the temporary house (or variable) which then is assign to give that value back to the first house
    *p2 = tmp;
}

void pointerinFunction() {
    // Define variable and put value in it
    int x = 15;
    // We can use pointers(*p) to store the memory address of that variable
    int *p = &x;

    printf("The number: %d is a local variable!\n", x);
    // We can print its memory adress by removing the asterisk in '*p' and using the '%p' format specificer
    printf("The memory address of that local variable is: %p\n", p);
    printf("This is made inside a function with local variables and pointers!\n\n");
}