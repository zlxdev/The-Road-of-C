/* =========================================================
 * WHILE-LOOP
 * ========================================================= */

#include <stdio.h>

int main(void) {
    int count = 1;

    // While loop runs as long as the condition is true
    while (count <= 3) { // in this case, count variable is 1 and its less then 3, 
                         // so the condition is true
        printf("Hello\n");

        // Important: to avoid having infinite loop, which most of the users 
        // cannot stop, it is generally good to increment the variable so 
        // the loop will continue to print until the conditon becomes false 
        // due to the incrementation
        count++;
    }

    return 0;
}

/* =========================================================
 * MUST KNOW
 * =========================================================
 * while-loop is an 'entry-level loop' it will only run if 
 * the condition is true, and will not stop if there are not 
 * logic that will make the condition false.
 * thats why it is important to have an increment or some 
 * logic to set the condition to false.
 *
 * What is it used for?
 * * it is widely used in loop menus to avoid having to 
 * rewrite the menu prompt again and again, it is also widely 
 * used in calculations that require solving random and 
 * complex combinations which then the loop will stop until 
 * the condition or 'target result' in this case sets the 
 * condition to false.
 * ========================================================= */