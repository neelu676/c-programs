 // sum of two fractions
 // Sum of two fractions
#include<stdio.h>

int main() {
    int num1, den1, num2, den2;
    int result_num, result_den;

    // Input first fraction
    printf("Enter numerator and denominator of 1st fraction: ");
    scanf("%d%d", &num1, &den1);

    // Input second fraction
    printf("Enter numerator and denominator of 2nd fraction: ");
    scanf("%d%d", &num2, &den2);

    // Calculate result
    result_num = num1 * den2 + num2 * den1;
    result_den = den1 * den2;

    // Output as a fraction
    printf("Sum of two fractions = %d/%d\n", result_num, result_den);

    return 0;
}

