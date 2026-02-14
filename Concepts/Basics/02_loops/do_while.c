#include <stdio.h>

int main(void) {
    int count = 20;

    do{ // executes the codes and the logic while the 'while-loop' below checks if the condition is true or false.
        printf("Hello\n");
        count--;        
    } while (count < 10); // Condition is false (20 is not < 10), so it stops the code here.

    return 0;
}


// ===========================
///        MUST READ
// ===========================


// do-while is an 'exit-controlled' loop.
// The difference between while and do-while loop is while ONLY runs if the condition is true
// do-while on the otherhand, runs once even if the condition is true.

// What is this use for?
// 
// good for doing a loop where it asks again, like a input-validation for example.