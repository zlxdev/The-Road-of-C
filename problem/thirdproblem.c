#include <stdio.h>

int main(void) {

    int current_year;
    int birth_year;
    int age;

    printf("Enter your birth year: ");
    scanf("%d", &birth_year);
    printf("Enter the current year: ");
    scanf("%d", &current_year);

    age = current_year - birth_year;
    printf("You are %d years old\n", age);

    return 0;
}