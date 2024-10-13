// Program to convert Celsius to Fahrenheit and vice-versa
#include <stdio.h>
int main() {
    float celsius;
    printf("Enter the tempreature in Celsius: ");
    scanf("%f", &celsius);

    float fahrenheit = ((celsius * 9)/5) + 32;
    printf("Tempreature in fahrenheit is: %f \n", fahrenheit); 
    return 0;
}