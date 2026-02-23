#include <stdio.h>

/*
 * LOGICAL OPERATORS: The "Decision Connectors"
 * -------------------------------------------
 * These operators allow you to check multiple conditions at once.
 * In C, there is no "True" or "False" keyword by default.
 * Instead: 0 = FALSE, 1 = TRUE.
 */

int main(void) {
    // Let's set up some variables for our "conditions"
    int has_id = 1;        // 1 means True
    int is_sober = 1;     // 1 means True
    int has_ticket = 0;   // 0 means False
    int is_admin = 0;     // 0 means False

    /*
     * 1. THE AND OPERATOR (&&)
     * Law: BOTH sides must be 1 for the result to be 1.
     */
    printf("--- THE AND OPERATOR (&&) ---\n");
    // You need an ID AND you must be sober to enter
    int can_enter = (has_id && is_sober);
    printf("Has ID and is sober? Result: %d (True)\n", can_enter);

    // You need an ID AND a ticket
    int has_both = (has_id && has_ticket);
    printf("Has ID and a ticket? Result: %d (False)\n\n", has_both);


    /*
     * 2. THE OR OPERATOR (||)
     * Law: Only ONE side needs to be 1 for the result to be 1.
     */
    printf("--- THE OR OPERATOR (||) ---\n");
    // You can enter if you are an Admin OR if you have a ticket
    int access_granted = (is_admin || has_ticket);
    printf("Admin or has ticket? Result: %d (False)\n", access_granted);

    // You can enter if you have an ID or if you are an Admin
    int flexible_entry = (has_id || is_admin);
    printf("ID or Admin? Result: %d (True)\n\n", flexible_entry);


    /*
     * 3. THE NOT OPERATOR (!)
     * Rule: Flips the result. 1 becomes 0, and 0 becomes 1.
     */
    printf("--- THE NOT OPERATOR (!) ---\n");
    printf("Is Admin: %d\n", is_admin);
    printf("Is NOT Admin (!is_admin): %d\n\n", !is_admin);


    /*
     * 4. THE "TRUTHINESS" RULE
     * Law: In C, any number that is NOT 0 is treated as True.
     */
    printf("--- THE TRUTHINESS RULE ---\n");
    if (500) {
        printf("The number 500 is treated as TRUE in C.\n");
    }
    if (0) {
        // This will never run
    } else {
        printf("The number 0 is treated as FALSE in C.\n");
    }

    return 0;
}

// ==========================================
//        QUICK NOTE: LOGICAL OPERATORS
// ==========================================
// 1. && (AND): Strict. Both must be True.
// 2. || (OR): Flexible. Only one needs to be True.
// 3. !  (NOT): Flips the truth.
// 4. C LOGIC: 0 is the ONLY False value. 
//    1, -5, or 999 are all considered True.
// ==========================================