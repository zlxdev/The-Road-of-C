#include <stdio.h>

void add();
void subtract();
void multiply();
void division();

int main(void){
    void (*operations[4])() = { add, subtract, multiply, division};
    for (int i = 0; i < 4; i++) {
        operations[i]();
    }
    return 0;
}

void add() {
    printf("Adding\n");
}

void subtract() {
    printf("subtracting\n");
}

void multiply() {
    printf("multiplying\n");
}

void division() {
    printf("Dividing\n");
}