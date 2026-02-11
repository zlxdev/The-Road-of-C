#include <stdio.h>

int main(void) 
{
    int rows, cols;

    printf("Enter the amount of rows: ");
    scanf("%d", &rows);
    printf("Enter the amount of columns: ");
    scanf("%d", &cols);

    int array[rows][cols];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    return 0;
}