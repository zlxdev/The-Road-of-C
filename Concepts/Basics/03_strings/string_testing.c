#include <stdio.h>
#include <string.h>
int main() {

    char fname[50];
    char lname[50];
    int age;

    printf("Enter your first name: ");
    fgets(fname, sizeof(fname), stdin);
    fname[strcspn(fname, "\n")] = '\0';

    printf("Enter your last name: ");
    fgets(lname, sizeof(lname), stdin);
    lname[strcspn(lname, "\n")] = '\0';

    printf("\nWelcome to ________\n");
    printf("What would you like to do, Player %s\n", lname);

    

    return 0;
}