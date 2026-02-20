#include <stdio.h>
#include <string.h>

typedef struct {
    char user[51];
    char pass[41];
    char fullname[100];

} user;

int userlogin (user *u){
    printf("Enter your username: ");
    scanf("%s", u->user);

    printf("Enter your password: ");
    scanf("%s", u->pass);
}

int main(void)
{
    user a1;

    userlogin(&a1);

    return 0;
}