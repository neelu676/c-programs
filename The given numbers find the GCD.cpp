 // The given numbers find the GCD
 #include<stdio.h>

int main()
{
    int n1 = 18, n2 = 45, gcd = 1;
    
    for(int i = 1; i <= n1 || i <= n2; i++) {
        if(n1 % i == 0 && n2 % i == 0)
            gcd = i;
    }
    
    printf("The GCD of %d and %d is: %d",n1,n2, gcd);
    
    return 0;
}
