#include <stdio.h>
#include <math.h> // For the pow() function

int main() {
    double principal, rate, time, compoundInterest, amount;
    int n; // Number of times the interest is compounded per year

    // Taking input from the user
    printf("Enter the Principal Amount: ");
    scanf("%lf", &principal);

    printf("Enter the annual interest rate (in percentage): ");
    scanf("%lf", &rate);

    printf("Enter the time in years: ");
    scanf("%lf", &time);

    printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &n);

    // Converting rate from percentage to decimal
    rate = rate / 100;

    // Applying the compound interest formula
    amount = principal * pow((1 + rate / n), n * time);

    // Compound interest is amount minus the principal
    compoundInterest = amount - principal;

    // Printing the results
    printf("The total amount after compound interest is: %.2lf\n", amount);
    printf("The compound interest is: %.2lf\n", compoundInterest);

    return 0;
}
