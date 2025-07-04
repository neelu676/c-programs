 // find the factorial number
 #include<stdio.h>
 int main()
 {
 	int i,fact=1,n;
 	printf("enter n:");
 	scanf("%d",&n);
 	for(i=1;i<=n;i++)
 	{
 		fact*=i;
	 }
	 printf("%d",fact);
 	
 }
