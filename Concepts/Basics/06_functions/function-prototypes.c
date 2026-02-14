#include <stdio.h>

// Function prototypes is just functions and well "prototypes".
// Since the C compiler read the code from top to bottom
// This means function prototypes is just declaring functions on top if you dont have any idea how to use them yet
// Or rather, you want to define them later
// This is useful specially for many cases when you dont have any specific idea about what you can do yet

// Let's start by putting the function prototypes here
void greet(char name[]);
int addNumbers(int x, int y);
void change_value(int x);


int main(void) {

    // Do the same usual code in function.c
    char name[] = "John";
    int num1 = 15;
    int num2 = 30;

    greet(name);

    int result = addNumbers(num1, num2);
    printf("The result is: %d\n", result);
    // or we can use it directly, like we did in the earlier file
    printf("The result is: %d (This is direct function formula)\n\n", addNumbers(num1, num2));

    // Then do the same changing values
    printf("num1 before changing: %d\n", num1);
    change_value(num1);
    printf("num1 after changing: %d (It stayed 15!)\n", num1);

    return 0;
}


/* =========================================================
 * FUNCTION DEFINITIONS (Actual Code)
 * =========================================================
 * Now we write the actual logic for the prototypes we 
 * promised at the top.
 */

void greet(char name[]) {
    printf("Hello %s!\n", name);
    printf("Welcome to C Programming!\n");
    printf("Hope you enjoy this journey!\n");
    printf("This message is also coming from a function called greet();\n\n");
}

int addNumbers(int x, int y) {
    return x + y; 
}

void change_value(int x) {
    x = 100;
    printf("Value inside function: %d\n", x);
}

// ==========================================
//      QUICK NOTE: FUNCTION PROTOTYPES
// ==========================================
// 1. THE PROBLEM: C reads from top to bottom. If you call a function
//    before the compiler has seen it, it will throw an error or warning.
//
// 2. THE SOLUTION: A "Prototype" is a declaration at the top of the 
//    file that tells the compiler: "This function exists, trust me."
//
// 3. THE STRUCTURE: A prototype is just the function header ended 
//    with a semicolon: 
//    Example: int add(int a, int b);
//
// 4. WHY IT MATTERS: In professional C (and Header files), prototypes 
//    allow you to organize your code however you want, keeping your 
//    main() function clean and at the top.
// ==========================================