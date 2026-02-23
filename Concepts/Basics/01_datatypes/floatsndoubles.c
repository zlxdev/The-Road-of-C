/* =========================================================
 * FLOATS AND DOUBLES
 * ---------------------------------------------------------
 * This program demonstrates decimal precision and memory.
 * Float: 4 bytes of memory (Speed/Efficiency).
 * Double: 8 bytes of memory (Accuracy/Precision).
 * ========================================================= */

#include <stdio.h>

int main(void) {
    // 1. INITIALIZATION
    // Declaring them empty allows the developer to create 
    // an input for the user to allocate a value later.
    float myFloat; 
    double myDouble; 

    // 2. INPUT HANDLING
    printf("\nEnter your float-decimal number: ");
    // '%f' tells the computer to assign a decimal to this float variable.
    scanf("%f", &myFloat); 

    printf("Enter your double-precision number: ");
    // '%lf' (Long Float) is used for double datatype input.
    scanf("%lf", &myDouble); 

    // 3. OUTPUT & FORMATTING
    // It is better practice to format floats (%.2f) unless you 
    // need absolute precision. '%.2f' only displays 2 decimal places.
    printf("\nYour Float value is: (%.2f)\n", myFloat);
    printf("Your Double value is: (%.2lf)\n", myDouble);

    /* ---------------------------------------------------------
     * MEMORY SIZE TEST
     * ---------------------------------------------------------
     * We use '%zu' alongside the 'sizeof()' function to check 
     * exactly how much RAM these variables occupy.
     */
    printf("\nSize of float variable (%.2f):  %zu bytes\n", myFloat, sizeof(myFloat));
    printf("Size of double variable (%.2lf): %zu bytes\n", myDouble, sizeof(myDouble));

    return 0;
}

/* =========================================================
 * IMPORTANT: PRECISION VS. MEMORY
 * =========================================================
 * The main difference is precision and memory size.
 * Double takes 8 bytes of memory compared to float's 4 bytes, 
 * allowing for more accurate calculations.
 *
 * PRACTICAL USES:
 * 1. FLOAT: Widely used in games for coordinates. Using 'Double' 
 * for millions of coordinates could overload the RAM and 
 * impact performance.
 *
 * 2. DOUBLE: Essential for money in banks, statistics, and 
 * numeric data where accuracy is more important than 
 * cost-efficiency.
 * ========================================================= */