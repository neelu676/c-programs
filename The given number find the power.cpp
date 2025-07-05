 // The given number find the power
 #include<stdio.h>
 int main()
 {
 	int base,exponent,result=1;
 	printf("enter base:");
 	scanf("%d",&base);
 	printf("enter exponent:");
 	scanf("%d",&exponent);
 	for(int i=1;i<=exponent;i++)
 	{
 		result=result*base;
	 }
	 printf("result=%d\n",result);
 }
