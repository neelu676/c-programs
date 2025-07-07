 // sum of two prime numbers
 #include<stdio.h>
 int prime(int n)
 
 {
 
 if(n<0)
 return 0;
 for(int i=2;i<n;i++){
 	if(n%i==0)
 	return 0;
 }
 return 1;	 	
 }
 int main()
 {
 	int n,i,found=0;
 	printf("enter a number:");
 	scanf("%d",&n);
 	
 	for(i=2;i<n/2;i++)
 	{
 		if(prime(i)&&prime(n-i))
 		{
 			printf("%d=%d+%d",n,i,n-i);
		 
		 found=1;
	}
	 }
	 if(found==0)
	 {
	 	printf("%d cannot sum is prime of two numbers",n);
	 }
	 return 0;
 }
