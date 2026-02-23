#include <stdio.h>
#include <math.h>

int main(void) {

    double angle = 35.2;
    double shadow = 150.00;
    double height;

    double angle_radians = angle * (M_PI / 180.0);
    height = shadow * tan(angle_radians);    
    
    printf("Angle of the sun: %.1lf degrees\n", angle);
    printf("Shadow length: %.1lf ft\n", shadow);
    printf("The calculated height of the derrick is: %.2lf ft\n", height);

    return 0;
}