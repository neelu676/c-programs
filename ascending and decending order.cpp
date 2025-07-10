#include <stdio.h>
#define SIZE 5

int main() {
    int a[SIZE], i, j, temp;

    // Input
    printf("Enter %d elements:\n", SIZE);
    for(i = 0; i < SIZE; i++) {
        scanf("%d", &a[i]);
    }

    // Sort in Ascending Order
    for(i = 0; i < SIZE - 1; i++) {
        for(j = i + 1; j < SIZE; j++) {
            if(a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // Print Ascending Order
    printf("\nArray in Ascending Order:\n");
    for(i = 0; i < SIZE; i++) {
        printf("%d\t", a[i]);
    }

    // Sort in Descending Order
    for(i = 0; i < SIZE - 1; i++) {
        for(j = i + 1; j < SIZE; j++) {
            if(a[i] < a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // Print Descending Order
    printf("\nArray in Descending Order:\n");
    for(i = 0; i < SIZE; i++) {
        printf("%d\t", a[i]);
    }

    return 0;
}

