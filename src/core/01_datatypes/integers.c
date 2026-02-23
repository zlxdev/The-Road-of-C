/* =========================================================
 * INTEGERS AND SCANF
 * ---------------------------------------------------------
 * This program demonstrates how to declare whole numbers 
 * and use user input to assign values.
 * ========================================================= */

#include <stdio.h>

int main(void) {
    // 1. INITIALIZATION
    // Not declaring anything makes it empty. We can use 
    // input (scanf) to assign a value later.
    int myAge; 

    // 2. INPUT HANDLING
    // Prompt for asking the age (similar to how forms do it).
    printf("Enter your age: "); 

    // '%d' acts as a scanner for signed integers (e.g. 1-10).
    // '&' assigns the input to the memory address of our variable.
    scanf("%d", &myAge); 

    // 3. OUTPUT
    // After assigning, the compiler prints the value if there are no errors.
    printf("You are %d years old\n", myAge); 

    return 0;
}

/* ====================================================================
 * IMPORTANT!!!!!!
 * ====================================================================
 * * 1. SCANF LIMITS: Spaces aren't allowed in a single scanf 
 *                    input because a space tells the computer 
 *                    to stop reading. Declaring multiple- 
 *                    variables is better than adding spaces.
 * * 2. INTEGER OVERFLOW: Using integers for very long numbers 
 *                       (like a phone number) can cause an 
 *                       'Overflow'. This produces "garbage values" 
 *                        because the number is too big for the 
 *                        4-byte memory slot. 
 
 
 * * RECOMMENDATION: Use other datatypes (like strings or long) 
 *                   for values that exceed standard integer 
 *                   limits.
 * ==================================================================== */