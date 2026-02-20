#include <stdio.h>

void addition(float x, float y) {
    float sum = x + y;
    printf("The sum of %.2f and %.2f is: %.2f", x, y, sum);
}

void subtraction(float x, float y) {
    float difference = x - y;
    printf("The difference of %.2f and %.2f is: %.2f", x, y, difference);
}

void multiplication(double x, double y) {
    double product = x * y;
    printf("The product of %.2lf and %.2lf is: %.2lf", x, y, product);
}

void division(double x, double y) {
    double quotient = x / y;
    printf("The quotient of %.2lf and %.2lf is: %.2lf", x, y, quotient);
}

void modulo(int x, int y) {
    int remainder = x % y;
    printf("The remainder of %d and %d is: %d", x, y, remainder);

}

int main(void)
{
    int choices;
    double num1;
    double num2;

    printf("Welcome to calculator.\n\nChoose your choices:\n1.) Basic Calculator\n2.) Temperature Calculator\n3.) Area Calculator\n4.) Salary Calculator \nor\n0 to quit.\n\nNumber?: ");
    scanf("%d", &choices);

    if (choices == 0) {
        printf("Goodbye.\n");
        return 0;
    } else if (choices == 1) {
        char bcal_choice;
        printf("Choose your operation (+, -, *, /, %%)");
        scanf("%c", &bcal_choice);

        switch (bcal_choice) {
            case '+':
                printf("Enter first number: ");
                scanf("%lf", &num1);
                printf("Enter second number: ");
                scanf("%lf", &num2);
                addition(num1, num2);
                break;
            case '-':
                printf("Enter first number: ");
                scanf("%lf", &num1);
                printf("Enter second number: ");
                scanf("%lf", &num2);
                subtraction(num1, num2);
                break;
            case '*':
                printf("Enter first number: ");
                scanf("%lf", &num1);
                printf("Enter second number: ");
                scanf("%lf", &num2);
                multiplication(num1, num2);
                break;
            case '/':
                printf("Enter first number: ");
                scanf("%lf", &num1);
                printf("Enter second number: ");
                scanf("%lf", &num2);
                division(num1, num2);
                break;
            case '%':
                printf("Enter first number: ");
                scanf("%lf", &num1);
                printf("Enter second number: ");
                scanf("%lf", &num2);
                modulo(num1, num2);
                break;
        }
        
    } else if (choices == 2) {
        char temp_choice;
        printf("Choose any temperature to calculate to: (c, f, k)");
        scanf(" %c", &temp_choice);

        switch (temp_choice) {
            case 'c':
                printf("");
        }
    }
}