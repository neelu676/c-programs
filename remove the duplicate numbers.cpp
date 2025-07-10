 // remove the duplicate numbers
 #include <stdio.h>

int main() {
    int arr[100], n, i, j;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array without duplicates:\n");
    for(i = 0; i < n; i++) {
        int isDuplicate = 0;

        // Check if arr[i] appeared before
        for(j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                isDuplicate = 1;
                break;
            }
        }

        if(isDuplicate == 0) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}

