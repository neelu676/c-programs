 // pascal triangle
 #include<stdio.h>
 int factorial(int n)
 {
 	int fact=1;
 	for(int i=1;i<=n;i++)
 	
 		fact=fact*i;
 		return fact;
 	}
	 
	 int combination(int n,int r)
	 {
	 	return factorial(n)/(factorial(r)*factorial(n-r));
	 	
	 }
	 
 int main()
 {
 	int rows,i,j;
 	printf("enter rows:");
 	scanf("%d",&rows);
 	for(i=0;i<rows;i++)
 	{
 		for(j=0;j<rows-i-1;j++)
 		printf(" ");
 		for(j=0;j<=i;j++)
 		printf("%4d",combination(i,j));
 		printf("\n");
	 }
 	
 }
