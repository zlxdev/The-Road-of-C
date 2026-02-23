#include <stdio.h>

void recursiveCounting(int x);

int main(void) {

    int num;
    printf("Enter a number to do recursive in: ");
    scanf("%d", &num);

    recursiveCounting(num);
    return 0;
}

void recursiveCounting(int x) {
    if (x > 0) {
        recursiveCounting(x - 1);
    }
    printf("Counting numbers: %d\n", x);
}