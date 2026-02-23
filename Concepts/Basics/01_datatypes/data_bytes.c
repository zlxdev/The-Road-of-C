/* =========================================================
 * DATA BYTES & SIZEOF()
 * ---------------------------------------------------------
 * This program demonstrates how much physical memory (RAM) 
 * each data type occupies. In C, we use the 'sizeof' operator 
 * to determine these values.
 * ========================================================= */

#include <stdio.h>
#include <stdbool.h>

int main(void) {
    // 1. VARIABLE INITIALIZATION
    char name[] = "Oliver";   // String (Array of characters)
    int age = 15;             // Whole number
    float grade = 96.15;      // Decimal (Single precision)
    double money = 20.00;     // Decimal (Double precision)
    char letter = 'a';        // Single character
    bool isSingle = true;     // Boolean (True/False)

    // 2. MEMORY SIZE OUTPUT
    // Note: %zu is the correct format specifier for sizeof results.
    printf("Size of string 'Oliver': %zu bytes\n", sizeof(name));
    printf("Size of int (age):      %zu bytes\n", sizeof(age));
    printf("Size of float (grade):  %zu bytes\n", sizeof(grade));
    printf("Size of double (money): %zu bytes\n", sizeof(money));
    printf("Size of char (letter):  %zu bytes\n", sizeof(letter));
    printf("Size of bool (isSingle):%zu bytes\n", sizeof(isSingle));

    return 0;
}

/* =========================================================
 * IMPORTANT NOTES:
 * =========================================================
 * * byte = 8 bits of data.
 * * 'sizeof' is vital for manual memory management because 
 * it tells you exactly how much space you need to allocate 
 * for your data.
 * * Strings: Notice that 'Oliver' is 6 letters, but sizeof 
 * might return 7. This is because C adds a hidden '\0' 
 * (Null Terminator) to the end of every string.
 * ========================================================= */