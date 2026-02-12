#include <stdio.h>

int main(void) {

    char choice;
    int tries = 0;

    do {
        printf("Do you wanna exit?: ");
        scanf(" %c", &choice);

    } while (tries <= 30);
    
    return 0;
}