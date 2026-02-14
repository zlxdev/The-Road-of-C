#include <stdio.h>

// Functions are basically just a bunch of separate codes that runs a specific tasks
// It is similar to "int main();" because main function just runs the main task you wanna run it
// We also have different type of functions such as VOID & RETURN TYPES
// Also, functions only copies your variable, so functions doesnt really change the variable you wanna pass into it
// This is useful for reducing messy code and making it modular


/* * 1. THE VOID FUNCTION
 * Use 'void' when you just want to group some code together
 * to run it later. It doesn't "give back" a result.
 */
void greet(char name[]) {
    // This returns a greeting message with your name in it
    printf("Hello %s!\n", name);

    // You can also add other messages as well
    printf("Welcome to C Programming!\n");
    printf("Hope you enjoy this journey!\n");
    printf("This message is also coming from a function called greet();\n\n");
}

/* * 2. THE RETURN FUNCTION
 * Use a type like 'int' when the function needs to calculate 
 * a value and send that value back to your main code.
 */

int addNumbers(int x, int y) {
    // The code below sends back the value of the numbers added
    return x + y; 
}

/* * 3. THE "ISOLATION" RULE
 * Variables inside a function are SEPARATE from main.
 * Changing 'a' here does NOT change 'num1' in main.
 */
void change_value(int x) {
    x = 100; // This only changes the COPY of the number
    printf("\nValue inside function: %d\n\n", x);
}

int main(void) {
    char name[] = "John";
    int num1 = 15;
    int num2 = 30;

    // Instead of using printf(), can we just use the void function greet() to greet you
    greet(name);

    // And we can add the 2 numbers after we greet the user by declaring a new variable that holds the result of the function
    int result = addNumbers(num1, num2);
    printf("The result of %d and %d is: %d\n", num1, num2, result);

    // Or we can return the value directly to printf()
    // However, this is not advisable in most cases, but it helps in simplifying your code
    printf("The result of both numbers is: %d\n\n", addNumbers(num1, num2));

    // Since functions only gets a copy of your variable we can't change the actual values of variables
    // For example: 
    printf("num1 before function: %d\n", num1);
    change_value(num1); // Let's try changing it
    printf("num1 after function: %d (Its still 15!)\n", num1);

    return 0;
}


// ==========================================
//           QUICK NOTE: FUNCTIONS
// ==========================================
// 1. REUSABILITY: Put code in a function so you don't have 
//    to type it over and over.
//
// 2. VOID vs RETURN: 
//    - 'void' just DOES something (like printing).
//    - 'int/float' CALCULATES something and gives it back.
//
// 3. PARAMETERS: The values you pass into the ( ) brackets.
//
// 4. THE COPY RULE: A function gets a COPY of your variable. 
//    Whatever it does to that copy doesn't affect your original.
// ==========================================