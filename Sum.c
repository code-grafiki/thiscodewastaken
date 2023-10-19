#include <stdio.h>

int main() {
    double num1, num2, sum;

    // Input
    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    // Sum the numbers
    sum = num2+num1;

    // Output
    printf("The sum of %.2lf and %.2lf is %.2lf\n", num1, num2, sum);

    return 0;
}
