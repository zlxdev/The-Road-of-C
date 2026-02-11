#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char user[100];
    char pass[100];
    char fullname[100];
    int age;
    char occupation[100];
    char status[50];
} User; 

void initCls() {
    printf("====================================================\n  WELCOME TO ....  \n====================================================\n\n");
}

void userlogin (User *u) {

    printf("====================================================\n  USER LOGIN  \n====================================================\n\n");
    printf("Enter your username: ");
    scanf("%s", u->user);

    printf("Enter your password: ");
    scanf("%s", u->pass);
}

void userinfo (User *u) {

    printf("====================================================\n  USER INFO  \n====================================================\n\n");

    printf("Full Name: ");
    fgets(u->fullname, sizeof(u->fullname), stdin);
    u->fullname[strcspn(u->fullname, "\n")] = '\0';

    printf("Occupation: ");
    fgets(u->occupation, sizeof(u->occupation), stdin);
    u->occupation[strcspn(u->occupation, "\n")] = '\0';

    printf("Status: ");
    fgets(u->status, sizeof(u->status), stdin);
    u->status[strcspn(u->status, "\n")] = '\0';

    char ageBuffer[10];
    printf("Age: ");
    fgets(ageBuffer, sizeof(ageBuffer), stdin);
    u->age = atoi(ageBuffer);
}

int main(void) {

    User a1;

    initCls();

    userlogin(&a1);

    userinfo(&a1);


    return 0;
}