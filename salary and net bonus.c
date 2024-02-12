//code for salary and net bonus
#include <stdio.h>
int main() {
    int years_of_service;
    float salary, bonus = 0.0f;
   // Prompt user to enter years of service
   	printf("Enter your years of service: ");
    scanf("%d", &years_of_service);
    // Prompt user to enter salary
 printf("Enter your salary: ");
    scanf("%f", &salary);
    //  Check if the employee has more than 5 years of service
    if (years_of_service > 5);
    // calculate bonus
        bonus = 0.05f * salary;
        // print result to one decimal point
    printf("Net bonus amount: %.1f\n", bonus);
    return 0;
}




