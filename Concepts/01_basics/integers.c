#include <stdio.h>

int main(void) {

    //initialize numbers as 'ints'
    int myNum; // -> Not declaring anything makes it empty, and we can use input inside this to assign a variable (e.g. scanf)

    //for example:
    printf("Enter your phone number: "); //Prompt for asking the number (e.g. like how banks do it)
    scanf("%d", &myNum); // '%d' acts as a scanner for signed integers (e.g. 1-10), then assigns it to the variable declared earlier using '&'

    //after assigning, the compiler should be able to print the code you wrote if there are no errors
    printf("Your phone number is: %d", &myNum); // Used the same format-specifier to print out the variable

    return 0;
}


// ======================================
//
//        IMPORTANT!!!!!!
//
// ======================================

// Keep in mind that spaces aren't allowed in using scanf since putting spaces will basically telling your computer to stop,
// this is why declaring multiple variables are bette than just adding spaces.
