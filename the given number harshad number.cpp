 // the given number harshad number
 #include<stdio.h>
 int main()
 {
 	int temp,rem,sum=0,n;
 	printf("enter n:");
 	scanf("%d",&n);
 	temp=n;
 	while(temp!=0)
 	{
 		rem=temp%10;
 		sum+=rem;
 		temp=temp/10;
	 }
	 if(n%sum==0)
	 printf("%d is harshad number",n);
	 else
	 printf("%d is not harshad number",n);
 }
