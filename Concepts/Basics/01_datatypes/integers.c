#include <stdio.h>

int main(void) {

    //initialize numbers as 'ints'
    int myAge; // -> Not declaring anything makes it empty, and we can use input inside this to assign a variable (e.g. scanf)

    //for example:
    printf("Enter your age: "); //Prompt for asking the age (e.g. like how forms do it)
    scanf("%d", &myAge); // '%d' acts as a scanner for signed integers (e.g. 1-10), then assigns it to the variable declared earlier using '&'

    //after assigning, the compiler should be able to print the code you wrote if there are no errors
    printf("You are %d years old\n", myAge); // Used the same format-specifier to print out the variable

    return 0;
}


// ======================================
//
//        IMPORTANT!!!!!!
//
// ======================================

// Keep in mind that spaces aren't allowed in using scanf since putting spaces will basically telling your computer to stop,
// this is why declaring multiple variables are bette than just adding spaces.
// 
// Also keep in mind that using longer integers like a phone number for example, will make a integer overflow
// which then produces garbage values, hence why it is recommended to keep it small and use other datatypes for longer values.
