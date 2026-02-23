# How memory works

## Stack vs Heap vs Data-Segment

**1. Stack:** is a static memory similar to a barn, it can store alot of variables but not above or within its limit (8mb in linux, 1mb in windows) before the program crashes. This is often used in small & local variables and are automatically deleted after it is used  (by the compiler), much unlike the heap.

**2. Heap: ** is a dynamic memory similar to a massive storage/warehouse, it works by asking the operating system to allocate a space in the massive warehouse (or in this case in RAM) depending on it size. This is often used and required for operating variables that stores massive amounts of bytes of data. This is also done manually using malloc(); inside a <stdlib.h> library.

**3. Data Segments:** is how global variables like constants are stored, it is seated in the lowest part of the memory where it is a READ-ONLY memory and only deletes itself in the memory not when the a function is done but when the overall program is done.

## Memory Adresses

**1. Stack:** starts on the prefix of `0x7ff`, and is usually located at the top of the page table, and works its way down towards the heap the more local variables are used.

**2. Heap:** starts in-between the data-segments and the stack memory `(starts on 0x5 and upto 0x7 where the stack is)`, and this part is usually massive (ive heard its about 280 trillion or more in x64 OS) allowing developers and users to store memory dynamically (always changing), so it wont fail when the user or database grows.

**3. Data Segments:** usually starts on the bottom `(0x5 BEFORE heap memory)` and is permanent, meaning it doesnt change and stays stagnant, and only cleared when the program ends. This is good for constant variables or READ ONLY variables.

## MUST KNOW

**1. Heap:** you need to manually set it up using malloc(); to initiate this, and also dont forget to clear it up using free(); to avoid memory leak which is usually the cause of errors and bugs.

**2. Data Segments:** using global variables are good for constant variables, but it is not advisable to put alot of it, especially when the global variable can be changed as this will cause alot of errors across your program.

**3. Stack:** as said above, stack has a limit. So you need to keep in mind how many local variables is necessary when building your program to avoid stack overflowing (Cool name i know, this should be a website name). 