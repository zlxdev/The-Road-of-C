#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
    char letters[] = {'a', 'b', 'c', 'd', 'e','\0'};
    const char target[] = "cadeb";
    int length = strlen(letters);

    int attempts = 0;
    const int max_attempts = 99999;

    srand(1);

    while(strcmp(letters, target) != 0 && attempts < max_attempts) {
        int i = rand() % length;

    }

    return 0;
}