#include <stdio.h>

int main(void) {

    char name[5] = {'K', 'I', 'R', 'A', '\0'};
    char *p = name;

    printf("%c", p[2]);

    return 0;
}