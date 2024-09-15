#include <stdio.h>

int main(){
    int principal;
    float rate, time, si;

    printf("Enter the Principal Amount: ");
    scanf("%d", &principal);

    printf("Enter the rate: ");
    scanf("%f", &rate);

    printf("Enter the time in years: ");
    scanf("%f", &time);

    si = (principal*rate*time)/100;

    printf("The calculated simple interest is: %f", si);

    return 0;
}