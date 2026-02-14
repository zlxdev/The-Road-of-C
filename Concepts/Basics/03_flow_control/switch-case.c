#include <stdio.h>

int main(void) {
    //declare variable here
    char choice;

    // lets ask for user input
    printf("Enter the current day (M, T, W, R, F, S, N): ");
    scanf(" %c", &choice);

    // same as if-else but more simpler to use and understand
    switch (choice) {
        case 'm': // prints the logic below if user type this
            printf("You typed '%c' which is Monday!\n", choice);
            break;
        case 't': // prints the logic below if user type this
            printf("You typed '%c' which is Tuesday!\n", choice);
            break;
        case 'w': // prints the logic below if user type this
            printf("You typed '%c' which is Wednesday!\n", choice);
            break;
        case 'r': // prints the logic below if user type this
            printf("You typed '%c' which is Thursday!\n", choice);
            break;
        case 'f': // prints the logic below if user type this
            printf("You typed '%c' which is Friday!\n", choice);
            break;
        case 's': // prints the logic below if user type this
            printf("You typed '%c' which is Saturday\n", choice);
            break;
        case 'n': // prints the logic below if user type this
            printf("You typed '%c' which is Sunday!\n", choice);
            break;
        default: // prints the logic below if user type this
            printf("Wrong input... Exiting...");
            return 0; // exits the program since the user types is now in the condition or 'case' in this case.
    }

    return 0;
}



// ==============================
//        SIDE NOTE
// ==============================


// switch-cases are more simpler and easier to use depending on how your logic works 
// since switch-cases can ONLY use a singular variable at a time (e.g. 1-9 or characters)
// this is commonly used and found on simple calculators.

// also, the difference between if-else and switch-case lies on how its use, but in general
// switch-cases are better to use if you only need to do certain logic based on singular value or character
// and it is also better for readability.
