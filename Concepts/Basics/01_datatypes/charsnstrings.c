// =========================================================
// BEFORE STARTING PLEASE READ THESE COMMENT BELOW
//
// This new concept requires a new library called 'string.h'
// which is similar to 'stdio.h', and it mostly focuses on
// string functions and make it work.
//
// =========================================================




#include <stdio.h>
// Insert it here below the 'stdio.h':
#include <string.h> // Library that makes using string possible

int main(void) {

    // As always, declare variables at the top
    char grade; // Leave it empty so user can print his grade (A+ - D-)
    char fullname[100]; // 'char varname[buffer]' this is how you use strings in C, you first initialize that its a character
                        //  then assign a name to that variable then put a buffer size (how many letters or values) 
                        //  you wanna put in that variable (e.g. [100] is mostly used in sentences or long names)

    printf("Enter your full name in capitalization: "); // Use prompt to ask for the name in capitalized manner
    fgets(fullname, sizeof(fullname), stdin); // fgets string is basically a scanf but it scans for the size of your buffer -> '[number]' and checks if it doesnt override the assigned buffer you declared earlier.
    fullname[strcspn(fullname, "\n")] = '\0'; // This line basically replaces the newline ("\n"), that exists in 'fgets();' function and replaces it with NULLpointers ''\0'', NULLpointers only signifies that the input or line has ended using that symbol

    printf("Enter your grade: "); // Usual prompt
    scanf(" %c", &grade); // Leave space before registering string to remove whiteline/newline.
    printf("\nHello %s, you grades are mostly %c grade\n", fullname, grade); // Prints the result using '%s' for strings and '%c' for single characters.

    return 0;
}


// =====================================================================================
//                  
//                             IMPORTANT MUST READ BELOW:
// 
// =====================================================================================

// Always remember that C is a procedular programming than other languages like Python, Java or Javascript.
// This means you are always responsible on what you code compared to other languages, this is also why i explain how buffers works in string
// beacuse strings are just an array of characters bundled in the buffer hence why its referred as 'char varname[buffersize]', than just typing 'string varname'
// compared to chars, string requires 'fgets();' function than 'scanf();', in order to make a sentence or write fullnames.
//
// Extra Note:
// Memory sizes and Buffers are the same in strings, if you declare [500] after a varname in a char, its basically saying you will assigned 100bytes of memory to register your array of characters (strings)