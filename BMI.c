// code to calculate body mass index of an individual based on height and weight
#include <stdio.h>
int main() {
int weight, height;
float bmi;
    // Prompt the user to enter weight in kilograms
    printf("Enter your weight (in kilograms): ");
    scanf("%d", &weight);
    // Prompt user to enter height in metres
    printf("Enter your height (in meters): ");
    scanf("%d", &height);
    // Calculate BMI using the formula BMI = weight / (height * height)
    bmi = weight / (height * height);
    // Print the calculated BMI
    printf("Your Body Mass Index (BMI) is: %.2f\n", bmi);
return 0;
}

