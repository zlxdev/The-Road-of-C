#include <stdio.h>

int main(void) {

    // Initialize float and doubles variables
    float myFloat; // declaring them empty allows the developer to create an input for user to allocate value in variable
    double myDouble; // same goes to double

    printf("\nEnter your float-decimal number: ");
    scanf("%f", &myFloat); // '%f' is a format-specifier for float, basically telling your computer to assign decimals on this variable

    printf("Enter your double-precision number: ");
    scanf("%lf", &myDouble); // '%lf' is more commonly used in assigning variables in a double datatype

    // Now let's print both values: 
    printf("\nYour Float value is (%.2f) and your Double value is (%.2lf)\n", myFloat, myDouble); // Also its better to practice formatting floats rather than displaying full values, that is unless you need it for precise accuracy of data.
                                                                                                // So keep in mind to use '%.2f' to only display 2 decimal values after the value.

    // ==================================================
    // READ THE IMPORTANT SECTION TO UNDERSTAND THIS PART
    // ==================================================

    // Here we use '%zu' to declare the memory size of each datatypes alongside 'sizeof()' function
    printf("\nThe size of your float variable (%.2f) is: %zu bytes\n", myFloat, sizeof(myFloat));
    printf("The size of your double variable (%.2f) is: %zu bytes\n", myDouble, sizeof(myDouble));

    return 0;
}

// ==========================================
//             IMPORTANT!!!
// ==========================================

// The difference between float and value is precision and memory size, as double datatypes relies on its precision and memory-values.
// Because float takes only 4 bytes of memory compared to double which takes 8 bytes of memory, allowing double to perform more precise calculations than float.

// -> Whats the practical use of it?
// 1. Float - widely used in games for coordinates since coordinates requires decimal points at random times, should one use 'Double' to calculate the task, it will only
//            overload the ram and possibly crash your game due to memory-overload. And do note this is one of the only examples.
// 2. Double - Useful for calculating precise values such as money in banks, statistical values, numeric datas which often requires accuracy rather than cost-efficiency.

// You can refer to the lowest part of the program which executes the size of both datatypes.