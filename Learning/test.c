#include <stdio.h>

int main(void) {
    // 1. INPUT/STORAGE: We store a large number (1025)
    int treasure = 1025; 

    // 2. THE LIE: We look at the 4-byte 'int' through a 1-byte 'char' telescope
    char *lie = (char *)&treasure; 

    // 3. PROCESS/OUTPUT: What does the first byte look like?
    printf("The whole treasure is: %d\n", treasure);
    printf("The 'lie' (first byte) is: %d\n", *lie);

    return 0;
}