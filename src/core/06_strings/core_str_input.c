#include <stdio.h>
#include <string.h>

int main(void) {

    char fullname[50];

    printf("Enter your fullname: ");

    //                 WARNING!!!
    // ==========================================
    //  BEST PRACTICE: fgets()
    // ==========================================
    // We use fgets() because it is SAFE.
    // 
    // WHY NOT scanf()? 
    // -> scanf("%s", name) stops reading at the first space.
    // -> If you type "John Smith", it only saves "John".
    //
    // WHY NOT gets()?
    // -> gets() is DANGEROUS and removed from C. 
    // -> It causes "Buffer Overflows" (crashing your program).

    // This is why its a bit tricky to use strings since
    // it covers alot of advance concepts that a beginner
    // shouldnt tackle early
    // ==========================================

    // lets use fgets() to get the string
    fgets(fullname, sizeof(fullname), stdin); // standard fgets function and its paramets to get the string
    
    // Since getting strings almost always includes a new line after you press enter
    // we can use something called a "strcspn" or String Complement Span
    // strcspn calculates the length of the text before the "\n". 
    // We use that length as an index to replace "\n" with the null terminator \0.
    // So we can avoid "weird-formatting"
    fullname[strcspn(fullname, "\n")] = '\0';

    // Lets print it
    printf("Hello %s!\n", fullname);

    return 0;
}


// ==========================================
//          QUICK NOTE: INPUT SAFETY
// ==========================================
// 
// 1. WHY NOT scanf()?
//    scanf("%s", name) stops reading at the first SPACE.
//    - Input:  "New York"
//    - Result: "New" (The rest is lost or causes errors later).
//
// 2. WHY NOT gets()?
//    gets() is DANGEROUS and removed from modern C (C11).
//    - It cannot check size. If you type more text than the array holds,
//      it crashes the program (Buffer Overflow).
//
// 3. THE WINNER: fgets()
//    - Safe: It respects the buffer size limit.
//    - Smart: It reads spaces ("New York" works!).
//    - QUIRK: It also saves the 'Enter' key (\n) at the end.
//
// 4. FIXING THE QUIRK (strcspn)
//    We use: name[strcspn(name, "\n")] = 0;
//    - This finds the '\n' character and replaces it with 0 (Null Terminator).
//    - Result: The string ends cleanly, without an extra new line.