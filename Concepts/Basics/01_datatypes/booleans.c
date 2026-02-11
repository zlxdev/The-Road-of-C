// ===========================================
//                MUST READ
//
// This concept generally requires you to use
// 'stdbool.h' library, although both 1 and 0
// can replicate the value of True and False
// on booleans, it is generally better to 
// learn actually booleans.
// ===========================================

// To start this we need to write the initial header along with the new library
#include <stdio.h>
#include <string.h> // Let's include strings with this one to get the name
#include <stdbool.h> // The boolean libarary

int main(void) {

    // Since boolean values are rather tricky and more advance concepts than earlier topics, you can just follow along and keep practicing the code
    char name[100]; // declaring other variables is generally good practice before declaring bools
    int age;
    bool isLegal;  // declearing the bool true or false depends on the context of your logic, you can use True for loops if you wanna iterate something or to compare values
                    // otherwise, you can leave it empty if you wanna do some basic logic instructions

    printf("\nEnter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    printf("What is your age?: ");
    scanf("%d", &age);

    // The next logic requires a new concept that will be expain later, so i will just note how bools work inside that logic
    if (age >= 18) { // checks if the age is above 18 or 18
        isLegal = true; // set the 'isLegal' to true
    } else {
        isLegal = false; // if its not greater than or equal to 18, then it goes false
    }

    //Now that it's done we can use the new value of bool to print specific condition
    if (isLegal) {
        printf("Hello %s, you are %d years old and an Adult\n", name, age);
    } else {
        printf("Hello %s, you are %d years old and a minor\n", name, age);
    }


    return 0;
}


// ===============================================
//                IMPORTANT
// ===============================================

// Booleans are heavily used in checking, validating or verifying certain logic before executing the consequences.
// They are great for doing less code specially on more advance topic about bools. However, you can also replicate
// this code using something like if/elseif/else or a whileloop. 

// P.S.
// If you have anything to improve or fix about this, you can fork the repository and contribute to us by pulling and pushing
// from another branch.