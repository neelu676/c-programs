 // The given number fibonacci series
 #include<stdio.h>
 int main()
 {
 	int n,a=0,b=1;
 	printf("enter n:");
 	scanf("%d",&n);
 	int nextTerm;
 	for(int i=2;i<=n;i++)
 	{
 		 nextTerm=a+b;
 		a=b;
 		b=nextTerm;
 		printf("%d",nextTerm);
	 }
 }
