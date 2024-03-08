#include <stdio.h>
#include <math.h>

// Function to calculate compound interest
double compound_interest(double principal, double rate, int time) {
    double amount = principal * pow((1 + rate / 100), time);
    return amount - principal;
}

int main() {
    double principal, rate, interest;
    int time;

    // Input principal amount, rate of interest, and time period
    printf("Enter principal amount: ");
    scanf("%lf", &principal);

    printf("Enter annual interest rate: ");
    scanf("%lf", &rate);

    printf("Enter time period in years: ");
    scanf("%d", &time);

    // Calculate compound interest
    interest = compound_interest(principal, rate, time);

    // Display the result
    printf("Compound interest after %d years: %.2lf\n", time, interest);

    return 0;
}


