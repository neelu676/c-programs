 // the given number is palindrome or not
 #include<stdio.h>

int main() {
    int sum = 0, n, temp, rem;
    printf("Enter n: ");
    scanf("%d", &n);

    temp = n; // Save original number
    while(n != 0) {
        rem = n % 10;
        sum = sum * 10 + rem;
        n = n / 10;
    }

    if(temp == sum)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;
}

