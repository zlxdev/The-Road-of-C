#include <stdio.h>

int main(void) {

    // String is just a combined char variables in an array
    // When we define a string of " char name[] = "John" "
    // Behind the scenes, C creates an array: 
    // Index: 0    1    2    3     4  
    // Data: 'J'  'o'  'h'  'n'  '\0'

    char name[] = "John";

    printf("The whole string: %s\n", name);

    // We can access each character/index like a normal array
    printf("The first letter is: %c\n", name[0]);

    // We can see the hidden 'stop sign' (Null terminator or '\0')
    // Since the letter 'n' is at index 3. What is inside the index 4?
    if (name[4] == '\0') {
        printf("The index 4 contains the hidden Null Terminator! (Stop Sign)\n");
    }

    // We can change what letters we want to change in the string by changing its index
    // Let's change the value stored in the 'name' array from "John" to "Yohn"
    name[0] = 'Y'; // Changes the 'J' to 'Y'
    printf("The new word is now: %s\n", name); // Result should be "Yohn"

    return 0;
}

// ==========================================
//      UNDERSTANDING STRINGS AS ARRAYS
// ==========================================
// 1. A string IS a char array. "Cat" is just ['C', 'a', 't', '\0'].
//
// 2. THE RULE: Strings always need ONE EXTRA SLOT for the '\0'.
//    - If you want to store "Hello" (5 letters), your array must be size 6.
//
// 3. ZERO-INDEXING: Works the same as numbers. 
//    - name[0] is the first letter.
//
// 4. WHY SHOULD YOU CARE: Knowing it's an array allows us to loop through
//    text, search for letters, or change specific characters.
//
// 5. LENGTH vs SIZE: 'John' has a length of 4 letters,
//    but its array SIZE is 5 because of the hidden '\0'.
// ==========================================