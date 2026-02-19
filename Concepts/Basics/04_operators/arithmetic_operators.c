#include <stdio.h>

/*
 * ARITHMETIC OPERATORS: The "Math Engine"
 * ---------------------------------------
 * These operators are used to perform mathematical calculations.
 * In C, the result depends heavily on the data types you use.
 */

int main(void) {
    // Basic Variables
    int a = 10;
    int b = 3;
    float x = 10.0;
    float y = 3.0;

    /*
     * 1. THE BASICS (+, -, *)
     * Addition, Subtraction, and Multiplication work as expected.
     */
    printf("--- BASIC MATH ---\n");
    printf("Addition (10 + 3): %d\n", a + b);
    printf("Subtraction (10 - 3): %d\n", a - b);
    printf("Multiplication (10 * 3): %d\n\n", a * b);

    /*
     * 2. THE DIVISION TRAP (/)
     * Rule: If you divide two integers, C throws away the decimal.
     * This is called "Truncation."
     */
    printf("--- DIVISION ---\n");
    printf("Integer Division (10 / 3): %d\n", a / b); // Result: 3
    printf("Float Division (10.0 / 3.0): %.2f\n\n", x / y); // Result: 3.33

    /*
     * 3. THE MODULO OPERATOR (%)
     * Rule: This gives you the REMAINDER of a division.
     * Note: Modulo ONLY works with integers (int).
     */
    printf("--- MODULO (REMAINDERS) ---\n");
    printf("10 divided by 3 is 3, with a remainder of: %d\n", a % b);
    // 10 % 3 = 1 because 3 * 3 = 9, and 10 - 9 = 1.
    printf("Is 10 even? (10 %% 2): %d\n\n", 10 % 2); // Result: 0 (No remainder)

    /*
     * 4. INCREMENT (++) AND DECREMENT (--)
     * Shortcuts to increase or decrease a variable by 1.
     */
    printf("--- INCREMENT & DECREMENT ---\n");
    int count = 5;
    printf("Original count: %d\n", count);
    
    count++; // Same as: count = count + 1;
    printf("After count++: %d\n", count);
    
    count--; // Same as: count = count - 1;
    printf("After count--: %d\n", count);

    return 0;
}

// ==========================================
//        QUICK NOTE: ARITHMETIC
// ==========================================
// 1. DATA TYPES: int / int = int (Decimals are lost).
//                float / float = float (Decimals are kept).
//
// 2. MODULO (%): Extremely useful for checking if a number 
//    is even or odd (x % 2).
//
// 3. PRECEDENCE: C follows PEMDAS. Multiplication/Division 
//    happen before Addition/Subtraction.
//
// 4. INCREMENT: ++ increases value by 1. -- decreases by 1.
// ==========================================