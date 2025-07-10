 // Symmetric pairs in 2D array
#include <stdio.h>

int main() {
    int a[7][2] = {
        {1, 1},
        {2, 1},
        {3, 3},
        {4, 3},
        {5, 0},
        {3, 4},
        {1, 2}
    };

    int i, j;

    printf("Symmetric pairs are:\n");
    for(i = 0; i < 7; i++) {
        for(j = i + 1; j < 7; j++) {
            if(a[i][0] == a[j][1] && a[i][1] == a[j][0]) {
                printf("(%d, %d)\n", a[i][0], a[i][1]);
            }
        }
    }

    return 0;
}

