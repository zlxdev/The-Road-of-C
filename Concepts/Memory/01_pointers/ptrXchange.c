#include <stdio.h>
#include <string.h>

void ptrXchange(int* a, int* b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void getInput (int *a, int *b) {
    printf("Enter first number: ");
    scanf("%d", a);
    printf("Enter second number: ");
    scanf("%d", b);

    while (getchar() != '\n');
}

int main(void) {

    int num1;
    int num2;
    char choice[10];

    getInput(&num1, &num2);
    
    printf("Your current value is: %d and %d\n", num1, num2);
    printf("Do you wanna change your values? (Y/N): ");
    
    if (fgets(choice, sizeof choice, stdin) != NULL) {
        choice[strcspn(choice, "\n")] = '\0';
    }

    if (strcmp(choice, "Y") == 0 || strcmp(choice, "y") == 0) {
        ptrXchange(&num1, &num2);
        printf("The new value is %d & %d\n", num1, num2);
    } else if (strcmp(choice, "N") == 0 || strcmp(choice, "n") == 0) {
        printf("Your existing value is still: %d and %d\n", num1, num2);
        printf("Okay, Goodbye.\n");
        return 1;
    }

    return 0;
}