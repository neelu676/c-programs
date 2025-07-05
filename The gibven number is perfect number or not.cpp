 // The gibven number is perfect number or not
 #include<stdio.h>
 int main()
 {
 	int n,i,sum=0;
 	printf("enter n:");
 	scanf("%d",&n);
 	for(i=1;i<n;i++)
 	{
 	if(n%i==0)
 	sum=sum+i;
	 }
	 if(sum==n)
	 printf("perfect number",n);
	 else
	 printf("not perfect number",n);
 }
