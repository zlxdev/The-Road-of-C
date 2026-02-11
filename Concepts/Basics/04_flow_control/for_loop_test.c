#include <stdio.h>

int main(void)
{
    double inputNum;
    double targetNum;

    printf("Enter initial number: ");
    while (scanf("%lf", &inputNum) != 1) {
        printf("Error reading the date type. Try again: ");
        while (getchar() != '\n');
    }
    
    printf("Enter target number: ");
    while(scanf("%lf", &targetNum) != 1) {
        printf("Error reading the date type. Try again: ");
        while (getchar() != '\n');
    }

    for (; inputNum <= targetNum; inputNum++) {
        printf("Counting number: %.2lf\n", inputNum);
    }
    printf("Process completed.\nThe code ended because it overlap/matched the target number.\n Current number: %.2lf\n", inputNum);
}