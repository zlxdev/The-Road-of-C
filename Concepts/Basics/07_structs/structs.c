#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Normal Structs
struct person
{
    int age;
    char firstName[26];
    char lastName[31];   /* data */
};

// Type Define / Alias Structs
typedef struct people 
{
    int age;
    int firstname[26];
    char lastname[31];

} Person;

int main()
{
    
    return 0;
}