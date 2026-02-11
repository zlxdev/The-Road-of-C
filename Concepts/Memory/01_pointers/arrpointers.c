#include <stdio.h>

int main(void) {


    char names[4] = {'J', 'Z', 'A', 'A'};
    char* ptr = names;

    for (int i = 0; i < sizeof(names); i++) {
        printf("%c with an index of %p\n", ptr[i], &names[i]);
    }

    return 0;
}