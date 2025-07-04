 // the given number is armstrong number range
  
 #include<stdio.h>

int main()
{
    int n, lower, upper, temp, sum, rem;

    printf("Enter lower and upper range: ");
    scanf("%d%d", &lower, &upper);

    for(n = lower; n <= upper; n++)
    {
        temp = n;
        sum = 0;

        while(temp != 0)
        {
            rem = temp % 10;
            sum = sum + (rem * rem * rem);  // cube of each digit
            temp = temp / 10;
        }

        if(sum == n)
        {
            printf("%d ", n);
        }
    }

    return 0;
}

