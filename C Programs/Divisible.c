// Write a program to check whether a number is divisible by 2 or not with comments without using function.

#include <stdio.h>

int main() {
    int number; // Declare an integer variable to store the input number

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number); // Read the input number from the user

    // Check if the number is divisible by 2 using the modulus operator
    if (number % 2 == 0) {
        printf("%d is divisible by 2.\n", number); // If true, print that the number is divisible by 2
    } else {
        printf("%d is not divisible by 2.\n", number); // If false, print that the number is not divisible by 2
    }

    return 0;
}