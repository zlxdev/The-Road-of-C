/* =========================================================
 * FOR-LOOP
 * ========================================================= */

#include <stdio.h>

int main(void) {

    // print numbers 0 - 2, because the condition becomes false when the 'i' 
    // variable has the same value as the condition target (3)
    for (int i = 0; i < 3; i++) {
        printf("%d\n", i);
    }

    return 0;
}

/* =========================================================
 * HOW IT WORKS
 * =========================================================
 * FORLOOP works by (declaring a variable; putting a condition; 
 * then updating it (++ or --)) inside the loop parameters 
 * (e.g. forloop(declare variable here; condition; update))
 * * It is also widely used when you know how many loop or 
 * 'iterations' you want to do (e.g. count to 10).
 * ========================================================= */