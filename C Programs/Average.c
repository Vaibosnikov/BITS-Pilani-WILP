// Program to print the average of 3 numbers

#include <stdio.h>

int main() {

    int number1, number2, number3;
    float avg;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &number1, &number2, &number3);

    avg = (number1 + number2 + number3) / 3.0; // Correct division

    printf("The average is: %.2f\n", avg); // <- This line PRINTS the result

    return 0;
}
