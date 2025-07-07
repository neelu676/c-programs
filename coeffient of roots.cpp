 // coeffient of roots
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float d, root1, root2;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = b * b - 4 * a * c;  // Discriminant

    if (d > 0) {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("Real and distinct roots:\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    } else if (d == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Real and equal roots:\n");
        printf("Root = %.2f\n", root1);
    } else {
        float realPart = -b / (2 * a);
        float imagPart = sqrt(-d) / (2 * a);
        printf("Complex roots:\n");
        printf("Root 1 = %.2f + %.2fi\n", realPart, imagPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imagPart);
    }

    return 0;
}

