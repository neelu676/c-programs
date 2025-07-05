 // The given number is Abudant number or not
 #include<stdio.h>
 int main()
 {
 	int sum=0,n,i;
 	printf("enter n:");
 	scanf("%d",&n);
 	for(i=1;i<n;i++)
 	{
 		if(n%i==0)
 		sum=sum+i;
	 }
	 if(sum>n)
	 printf("%d is Abudant number",n);
	 else
	 printf("%d is not Abudant number",n);
 }
