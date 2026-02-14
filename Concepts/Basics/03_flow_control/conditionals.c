#include <stdio.h>

int main(void) {

    // declare variable here
    int inputNum;
    int targetNum = 30;

    // let's get the value of inputNum by scanning the userinput
    printf("Enter your number: ");
    scanf("%d", &inputNum);

    // here we'll use an if-else statement to check whether the inputNum is greater or less than than the targetNum
    if (inputNum < targetNum) {
        printf("%d is less than the target: %d\n", inputNum, targetNum); // prints this line of code if the inputnumber is > targetnumber
    } else if (inputNum > targetNum) {
        printf("%d is greater than the target: %d\n", inputNum, targetNum); // otherwise (else if) the inputnumber is greater than the targetnumber it prints this line
    } else {
        printf("Both have the same values.\n"); // or if the input number somehow matches the target number, it prints this line since they both have the same values
    }

    return 0;
}


// =============================
//    ADDITIONAL KNOWLEDGE
// =============================


// if-else if-else is good for controlling the flow of logic.
// Examples of usage in if-else can vary from simple logic checker to a more complex input validator or a menu option.
// this is also better to use if you want to do certain logic if the condition is that way, else if the condition is different then you print the other logic
// else if there are no logic, you can just use 'return 0;' to end the logic.