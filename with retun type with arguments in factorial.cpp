 // with retun type with arguments in factorial
 #include<stdio.h>
 int fact(int a)
 {
 	int result=1,n;
 	for(int i=1;i<n;i++)
 	{
 		result=result*i;
	 }
 	return result;
 	
 }
 int main()
 {
 	int n1,result;
 	printf("enter n1:");
 	scanf("%d",&n1);
 		result=fact(n1);
	 
	 printf("%d",n1);
 	
 }
