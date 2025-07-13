#include <stdio.h>

// Function declarations
void sum(int, int);
void sub(int, int);
void mul(int, float);

// Function pointers
void (*ptr)(int, int);
void (*ptr1)(int, float);

int main()
{
    // Assign and call sum
    ptr = sum;
    ptr(5, 20);  // Output: Sum: 25

    // Assign and call sub
    ptr = sub;
    ptr(10, 5);  // Output: Sub: 5

    // Assign and call mul
    ptr1 = mul;
    ptr1(1, 5.0);  // Output: Mul: 5.00

    return 0;
}

// Function definitions
void sum(int a, int b)
{
    printf("Sum: %d\n", a + b);
}

void sub(int a, int b)
{
    printf("Sub: %d\n", a - b);
}

void mul(int a, float b)
{
    printf("Mul: %.2f\n", a * b);
}
