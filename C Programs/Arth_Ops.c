#include <stdio.h>

int main() {
    int num1, num2, sum, sub, mult, mod;
    float div;

    // Input two numbers from user
    printf("Enter 1st number number: ");
    scanf("%d", &num1);

    printf("Enter 2nd number number: ");
    scanf("%d", &num2);    

    // Perform all arithmetic operations
    sum = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = (float)num1 / num2; // Typecasting to float for division
    mod = num1 % num2;

    // Print result of all arithmetic operations
    printf("SUM = %d\n", sum);
    printf("DIFFERENCE = %d\n", sub);
    printf("PRODUCT = %d\n", mult);
    printf("QUOTIENT = %.2f\n", div);
    printf("MODULUS = %d\n", mod);

    return 0;
}
