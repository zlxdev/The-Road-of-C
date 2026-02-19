/* =========================================================
 * STRING LITERALS
 * ========================================================= */

#include <stdio.h>

int main(void) {

    // 1. C doesn't have a "String" type. 
    // We must use an array (a row) of characters.
    // The [] tells C to figure out the size for us (e.g. char var_name[buffer]).
    char lang[] = "C/C++"; 
    char name[] = "Johnzel";

    // 2. Printing
    // We use %s as a placeholder for each string.
    printf("Hello %s, welcome to %s Programming!\n", name, lang); 

    return 0;
}

/* =========================================================
 * QUICK KNOWLEDGE
 * =========================================================
 * "string literals" or normal strings are already existing 
 * strings which means it is already defined and declared 
 * and cannot be changed by the user or the code itself
 * changing requires a developer to change it directly.
 *
 * What is this used for?
 * * This is used for referrencing like a book in a library
 * ========================================================= */