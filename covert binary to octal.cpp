
// Convert binary to octal
#include<stdio.h>

int main() {
    long long binary;
    int decimal = 0, octal = 0, rem, base = 1;

    printf("Enter binary: ");
    scanf("%lld", &binary);

    long long temp = binary;

    // Step 1: Binary to Decimal
    while (temp > 0) {
        rem = temp % 10;
        decimal = decimal + rem * base;
        base = base * 2;
        temp = temp / 10;
    }

    // Step 2: Decimal to Octal
    int i = 1;
    while (decimal > 0) {
        rem = decimal % 8;
        octal = octal + rem * i;
        decimal = decimal / 8;
        i = i * 10;
    }

    // Output
    printf("Octal number is: %d\n", octal);

    return 0;
}

