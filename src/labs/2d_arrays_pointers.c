#include <stdio.h>

int main(void) {

    // define each rows and columns for a 2d array dynamically using user-input
    int rows, cols;
    printf("Enter [ROWS] and [COLS] for a 2d-Array: ");
    scanf("%d %d", &rows, &cols);
    
    // define a variable with the inteded rows and columns
    char setA[rows][cols];
    char (*setPtr)[cols] = setA; // defining a pointer that points to the next row of columns in memory

    // nested loops for assigning values for each index
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++){
            printf("Enter numbers for each [%d][%d]: ", i, j);
            scanf(" %c", &setA[i][j]);
        }
    }

    // print values of each index with their memory addresses
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("\n\nHere are the values of Index[%d][%d]: %c\nWith the memory address of: %p (Stack Memory)\n", i, j, *(*(setPtr + i) + j), *((setPtr + i) + j));
        }
    }
    return 0;
}