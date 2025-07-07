//Function to count the number of divisors of a number//
#include <stdio.h>


int countDivisors(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0)
            count++;
    }
    return count;
}

int main() {
    int N, X, total = 0;

    printf("Enter the range N: ");
    scanf("%d", &N);

    printf("Enter the number of divisors X: ");
    scanf("%d", &X);

    for (int i = 1; i <= N; i++) {
        if (countDivisors(i) == X)
            total++;
    }

    printf("Number of integers between 1 and %d with exactly %d divisors: %d\n", N, X, total);

    return 0;
}

