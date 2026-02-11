#include <stdio.h>
#include <stdbool.h>

int main(void) {

    char name[] = "Oliver";
    int age = 15;
    float grade = 96.15;
    double money = 20.00;
    char letter = 'a';
    bool isSingle = true;

    printf("%zu\n", sizeof(name));
    printf("%zu\n", sizeof(age));
    printf("%zu\n", sizeof(grade));
    printf("%zu\n", sizeof(money));
    printf("%zu\n", sizeof(letter));
    printf("%zu\n", sizeof(isSingle));

    return 0;
}