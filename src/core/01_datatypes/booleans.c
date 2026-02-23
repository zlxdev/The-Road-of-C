/* =========================================================
 * MUST READ
 * * This concept generally requires you to use the 
 * 'stdbool.h' library. Although both 1 and 0 can 
 * replicate the value of True and False on booleans, 
 * it is generally better to learn actual booleans.
 * ========================================================= */

#include <stdio.h>
#include <string.h>  // Including strings to handle names
#include <stdbool.h> // The boolean library

int main(void) {
    // Since boolean values are rather tricky and more advanced concepts than 
    // earlier topics, you can just follow along and keep practicing the code.

    // 1. DECLARATION 
    // It is generally good practice to declare other variables before bools.
    char name[100]; 
    int age;
    bool isLegal; // Using True/False depends on your context (loops or comparing).
                  // You can leave it empty for basic logic instructions.

    // 2. INPUT
    printf("\nEnter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    printf("What is your age?: ");
    scanf("%d", &age);

    // 3. LOGIC
    // The next logic requires a new concept that will be explained later.
    // I will just note how bools work inside that logic here:
    if (age >= 18) {    // Checks if the age is above 18 or 18
        isLegal = true; // Set 'isLegal' to true
    } else {
        isLegal = false;// If not >= 18, it goes false
    }

    // 4. OUTPUT
    // Now that it's done, we can use the bool value to print specific conditions.
    if (isLegal) {
        printf("Hello %s, you are %d years old and an Adult\n", name, age);
    } else {
        printf("Hello %s, you are %d years old and a minor\n", name, age);
    }

    return 0;
}

/* =========================================================
 * IMPORTANT
 * =========================================================
 * Booleans are heavily used in checking, validating, or 
 * verifying certain logic before executing the consequences.
 * * They are great for doing less code, especially on more 
 * advanced topics. However, you can also replicate this 
 * code using if/elseif/else or a while loop.
 * * P.S.
 * If you have anything to improve or fix, fork the repository 
 * and contribute by pulling/pushing from another branch.
 * ========================================================= */