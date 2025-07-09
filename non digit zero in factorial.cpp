 // non digit zero in factorial
 #include <stdio.h>
//Recursive function to calculate the factorial
int fact(int n){

   if(n <= 1) //Base Condition
   return 1;

   return n*fact(n-1);
}

//Driver Code
int main(){

   int n=15;
   int factorial = fact(n);

   while(factorial%10==0)
   {
        factorial /= 10;
   }

   printf("%d",factorial%10);
}

