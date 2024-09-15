#include <stdio.h>
#include <math.h>  // For pow() function

// Define M_PI if it's not defined
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main() {
    // Declare variables for the dimensions of the square, rectangle, and circle
    double a, l, b, r;
    double ar_sq, ar_rec, ar_cir;

    // Get the side of the square
    printf("Enter the side of the square (units): ");
    scanf("%lf", &a);

    // Calculate the area of the square (a^2)
    ar_sq = pow(a, 2);

    // Get the length and breadth of the rectangle
    printf("Enter the length of the rectangle (units): ");
    scanf("%lf", &l);
    printf("Enter the breadth of the rectangle (units): ");
    scanf("%lf", &b);

    // Calculate the area of the rectangle (length * breadth)
    ar_rec = l * b;

    // Get the radius of the circle
    printf("Enter the radius of the circle (units): ");
    scanf("%lf", &r);

    // Calculate the area of the circle (π * r^2)
    ar_cir = M_PI * pow(r, 2);

    // Output the calculated areas with units of measurement
    printf("The area of the square is: %.2lf square units\n", ar_sq);
    printf("The area of the rectangle is: %.2lf square units\n", ar_rec);
    printf("The area of the circle is: %.2lf square units\n", ar_cir);

    return 0;
}