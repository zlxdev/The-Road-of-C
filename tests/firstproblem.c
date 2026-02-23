#include <stdio.h>

int main(void) {

    double s_edge;
    printf("Enter one-side of a cube: ");
    scanf("%lf", &s_edge);

    double side_area = s_edge * s_edge;
    double sa_cube = side_area * 6;
    double volume = s_edge * s_edge * s_edge;
    
    printf("The surface area of one-side of a cube is: %.2lf\n", side_area);
    printf("The surface area of a cube is: %.2lf\n", sa_cube);
    printf("The calculated volume of the value entered is: %.2lf\n", volume);
    return 0;
}