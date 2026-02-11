#include <stdio.h>

typedef struct {
    char name[50];
    char occupation[50];
} Person;

int main(void) {
    
    Person p1 = {"Johnzel", "Single"};
    prinf("Hello %s, you are still %s\n", p1.name, p1.occupation);
    
    return 0;
}