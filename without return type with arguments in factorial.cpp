 //without return type with arguments in factorial
 #include<stdio.h>
 void factorial(int n)
 {
 	int i,fact=1;
 	for(i=1;i<=n;i++)
 	{
 		fact=fact*i;
	 }
	 printf("%d",fact);
  } 
  int main()
  {
  	int x,fact;
  	printf("enter x:");
  	scanf("%d",&x);
  	factorial(x);
  }
