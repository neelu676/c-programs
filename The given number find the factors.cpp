 // The given number find the factors
 #include<stdio.h>
 int main()
 {
 	int n;
 	printf("enter n:");
 	scanf("%d",&n);
 	for(int i=1;i<=n;i++)
 	{
 		if(n%i==0)
 		printf("%d,",i);
	 }
 }
