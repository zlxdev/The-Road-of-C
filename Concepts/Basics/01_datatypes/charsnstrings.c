/* =========================================================
 * BEFORE STARTING PLEASE READ BELOW:
 * * This concept requires a new library called 'string.h'
 * which is similar to 'stdio.h'. It mostly focuses on
 * string functions and making them work.
 * ========================================================= */

#include <stdio.h>
#include <string.h> // Library that makes using strings possible

int main(void) {
    // 1. VARIABLE DECLARATION
    // As always, declare variables at the top.
    char grade;         // Empty so user can input their grade (A+ - D-)
    char fullname[100]; // 'char varname[buffer]' is how you use strings in C.
                        // Initialize as a character, assign a name, then set a 
                        // buffer size (e.g. [100] for sentences or long names).

    // 2. INPUT HANDLING
    printf("Enter your full name in capitalization: ");
    
    // fgets is like scanf but it scans for the size of your buffer [100]
    // and checks if it doesn't override the assigned buffer you declared.
    fgets(fullname, sizeof(fullname), stdin); 

    // This line replaces the newline ("\n") from fgets() with a NULL pointer '\0'.
    // NULL pointers signify that the input or line has ended.
    fullname[strcspn(fullname, "\n")] = '\0'; 

    printf("Enter your grade: ");
    scanf(" %c", &grade); // Space before %c removes whiteline/newline.

    // 3. OUTPUT
    // Prints result using '%s' for strings and '%c' for single characters.
    printf("\nHello %s, your grades are mostly %c grade\n", fullname, grade);

    return 0;
}

/* =========================================================
 * IMPORTANT MUST READ BELOW:
 * =========================================================
 * Always remember that C is a procedural language compared to 
 * Python, Java, or Javascript. You are always responsible 
 * for what you code.
 * * * String Logic: Strings are just an array of characters 
 * bundled in a buffer: 'char varname[buffersize]'.
 * * * Function Usage: Strings require 'fgets()' rather than 
 * 'scanf()' to properly handle sentences or full names.
 * * * Memory Note: Memory sizes and Buffers are the same in 
 * strings. Declaring [500] is saying you will assign 500 
 * bytes of memory to register your array of characters.
 * ========================================================= */