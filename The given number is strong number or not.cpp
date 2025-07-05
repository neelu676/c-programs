 // The given number is strong number or not
 #include<stdio.h>
 int factorial(int n)
 {
 
 int fact=1;
 for(int i=1;i<=n;i++)
 {
 	fact=fact*i;
 }
 return fact;
}
int main()
{
	int temp,sum=0,rem,n;
	printf("enter a n:");
	scanf("%d",&n);
	temp=n;
	while(temp!=0)
	{
		rem=temp%10;
		sum=sum+factorial(rem);
		temp=temp/10;
	}
	if(sum==n)
printf("%d is strong number",n);
else
printf("%d is  not strong number",n);	
}
 
 
 	
 
