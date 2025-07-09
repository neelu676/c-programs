 // recursion prime number
 #include<stdio.h>
int main()
{
	int i,n,isprime=1;
	printf("enter number:");
	scanf("%d",&n);
	if(n<=1)
	{
		isprime=0;
	}
	else
	{
		for(i=2;i<n;i++)
		{
			if(n%i==0)
			{
			
				isprime=0;
				break;
			}
		}
	}
	if(isprime==1)
	{
		printf("%d is prime number",n);
	}
	else
	{
		printf("%d is not a prime number",n);
}
}
