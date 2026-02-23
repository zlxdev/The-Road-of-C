#include <stdio.h>

// Constant Var
const double pi = 3.14159;
const double var1 = 4;
const double var2 = 4.0 / 3.0;

// Calculating Functions
void calculateAreaofcircle(double r);
void calculateVolumeofsphere(double r);
void calculateAreaofsphere(double r);

// UI Function
void choiceUI();


int main(void) {

    double r;
    int choice = 0;

    printf("Enter radius: ");
    scanf("%lf", &r);

    while (choice != 4) {
        choiceUI();
        scanf("%d", &choice);

        if (choice != 1){
            printf("\n\nCannot render a char to an int. Exiting.\n"); 
            return 1;
        }

        switch (choice) {
            case 1:
                calculateAreaofcircle(r);
                break;
            case 2:
                calculateAreaofsphere(r);
                break;
            case 3:
                calculateVolumeofsphere(r);
                break;
            case 4:
                printf("Exiting....\n");
                return 0;
        }
    }


    return 0;
}

void calculateAreaofcircle(double r) {
    double a = pi * r * r;
    printf("The result is: %.2lf\n\n", a);
}

void calculateVolumeofsphere(double r) {
    double a = var2 * pi * r * r * r;
    printf("The result is: %.2lf\n\n", a);
}

void calculateAreaofsphere(double r) {
    double a = var1 * pi * r * r;
    printf("The result is: %.2lf\n\n", a);
}

void choiceUI() {
    printf("Choose what you wanna do: \n\n");
    printf("1. Area of Circle\n");
    printf("2. Area of Sphere\n");
    printf("3. Volume of Sphere\n");
    printf("4. Exit\n\n");
    printf("Enter your choice: ");
}