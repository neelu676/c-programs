 // count the number of digits in integer
 #include<stdio.h>
 int main()
 {
 	int count=0,n;
 	printf("enter n:");
 	scanf("%d",&n);
 	while(n>0)
 	{
 		count++;
 		n=n/10;
 		
	 }
	 printf("%d",count);
 	
 }
