
// The numbers are friendly pair or not
#include <stdio.h>

int find_sum(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0)
            sum = sum + i;
    }
    return sum;  // ? Add this return statement
}

int main() {
    int a, b;
    printf("Enter a, b: ");
    scanf("%d %d", &a, &b);

    int sum_a = find_sum(a);
    int sum_b = find_sum(b);

    if ((sum_a * b) == (sum_b * a))
        printf("%d, %d are friendly pairs\n", a, b);
    else
        printf("%d, %d are not friendly pairs\n", a, b);

    return 0;
}

