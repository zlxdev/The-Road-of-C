#include <stdio.h>

int main(void) {

    // Arrays works by storing 2 or more values in a variable
    // We do that simply by declaring '[]' and putting values inside it.
    // Let's say we want to store 5 numbers.
    // We do that by adding 5 in inside the bracket
    int myNumbers[5];

    // We can put 5 values inside that box by "indexing" them (putting them in position)
    // Since arrays usually starts as 0, we start counting and indexing by 0
    myNumbers[0] = 5; // Setting the first number as 5
    myNumbers[1] = 10; // This time we set the 2nd number as 10
    myNumbers[2] = 15; // Third value sets as 15
    myNumbers[3] = 20; // 4th value is now 20
    myNumbers[4] = 25; // The final and 5th number in the array in the index is set to 25

    // If you are wondering why there is no myNumbers[5] in the index, it is because arrays starts as 0
    // That means it starts counting number 1 in the array as 0
    // If we somehow try to put myNumbers[5] as an index, it would cause an error
    // Why? because if we did try to access/use myNumbers[5], C will still let us run the code.
    // BUT, it will access "forbidden" memory
    // This is what we call "Out of Bounds" error that leads to crashes or weird bugs

    printf("How to access one item:\n");
    printf("The second fourth item is at index 3: %d\n\n", myNumbers[3]); 
    // This prints the result: 20
    // Why? because index 3 is assigned as 20

    printf("How to access all items using a loop:\n");
    // This time, we'll use forloop to print each index
    // We'll the normal forloop formula to index each items
    // That being said, we are indexing an array items, so naturally, index starts at 0
    for (int i = 0; i < 5; i++) {
        // This means that we're using the "i" variable as a way to point each value of arrays
        printf("Index %d holds the value of: %d\n", i, myNumbers[i]);
    }

    return 0;
}


// ==========================================
//         QUICK NOTE ABOUT ARRAYS
// ==========================================
// 1. ONE TYPE: You can't put a 'char' in an 'int' array.
// 2. FIXED SIZE: Once you say [5], you can't make it [6] later.
// 3. INDEXING: [0] is the 1st item. [Size - 1] is the last item.
// 4. MEMORY: Arrays live in a perfect straight line in RAM. 
//    This makes them very fast for the computer to read!
// ==========================================