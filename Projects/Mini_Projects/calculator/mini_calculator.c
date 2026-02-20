#include <stdio.h>
int main() {

    int choice;
    double num1;
    double num2;
    double result;

    printf("\nWelcome to Calculator\n");
    printf("Choose your operation:\n1.) Addition\n2.) Subtraction\n3.) Multiplication\n4.) Division\n\n:");
    scanf("%d", &choice);

    if (choice < 1 || choice > 4) {
        printf("Invalid choice. Returning.");
        return 1;
    }

    printf("Enter first number: ");
    scanf(" %lf", &num1);
    printf("Enter your second number: ");
    scanf(" %lf", &num2);

    switch (choice) {
        case 1:
        result = num1 + num2;
        printf("The result of both numbers is: %.2lf\n", result);
        break;

        case 2:
        result = num1 - num2;
        printf("The result of both numbers is: %.2lf\n", result);
        break;

        case 3:
        result = num1 * num2;
        printf("The result of both numbers is: %.2lf\n", result);
        break;

        case 4:
        result = num1 / num2;
        printf("The result of both numbers is: %.2lf\n", result);
        break;
    }

}