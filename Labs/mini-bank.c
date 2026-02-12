#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>


struct Account {
    char name[50];
    int pin;
    int id;
    double bal;
};

void mainmenu(struct Account *user);
// void loginSys(struct Account *user);
// void createAccount(struct Account *user);
void displayAccount(struct Account *user);
void deposit(struct Account *user);
void withdraw(struct Account *user);

int main(void) {

    struct Account accOne = {"Johnzel", 2007, 101, 0.00};

    int enteredPIN;
    printf("\n====== Welcome to Bank =======\n");
    printf("\nEnter your PIN: ");
    scanf("%d", &enteredPIN);

    if (enteredPIN == accOne.pin) {
        mainmenu(&accOne);
    } else {
        printf("Could not process your PIN because it is invalid. Existing...\n");
    }

    return 0;
}

void mainmenu (struct Account *user) {
    int choice = 0;
    while (choice != 4) {
        printf("\nWelcome to Bank, Costumer %s!\n", user->name);
        printf("1. Deposit\n2. Withdraw\n3. My Account\n4. Exit\n");
        printf(": ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: deposit(user); break;
            case 2: withdraw(user); break;
            case 3: displayAccount(user); break;
            case 4: printf("Logging out...\n"); break;
            default: printf("invalid choice.\n");
        }
    }
}

void deposit (struct Account *user) {
    double amount;
    printf("Enter amount to deposit: ");
    scanf("%lf", &amount);

    printf("Processing, please wait...\n");
    usleep(10000000); //delays for 15 secs
    user->bal += amount;

    printf("Deposit Successfull!\n");
    printf("Current Balance: %.2lf", user->bal);
}

void withdraw (struct Account *user) {
    printf("Please wait while we check your balance...\n");
    usleep(10000000);

    if (user->bal <= 0.00) {
        printf("\n [ALERT] You have no balance left: %.2lf", user->bal);
        printf("\n Exiting....\n");
        usleep(3000000);
        return;
    }

    double amount;

    printf("\n====== Withdraw ========\n");
    printf("\nCurrent Balance: %.2lf\n", user->bal);
    printf("\nEnter the amount to withdraw: ");
    scanf("%lf", &amount);

    if (amount > user->bal) {
        printf("\n [ALERT] Transaction denied: Insufficient Funds.\n");
        printf("\n You are P%.2lf short.\n", (amount - user->bal));
        printf("Exiting....\n");
        usleep(5000000);
        return;
    }

    user->bal -= amount;
    printf("\nSuccess! You withdrew P%.2lf", amount);
    printf("\nCurrent Balance: P%.2lf", user->bal);
}

void displayAccount (struct Account *user) {
    printf("Please wait while we process your information....\n");
    usleep(25000000);

    printf("\nName: %s", user->name);
    printf("\nID: %d", user->id);
    printf("\nCurrent Balance: P%.2lf", user->bal);

    printf("\n[DO NOT SHARE THIS TO ANYONE]");
    printf("\nPIN: %d", user->pin);
}