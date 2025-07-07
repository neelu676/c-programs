 // the given digit 0 reolaec with 1
 #include<stdio.h>
 int main()
 {
 	int digit,place=1,result=0,n;
 	printf("enter number:");
 	scanf("%d",&n);
 	if(n==0)
 	{
 		result=1;
	 }
	 else
	 while(n>0)
	 {
	 	digit=n%10;
	 	if(digit==0)
	 	digit=1;
	 	result=result+digit*place;
	 	place=place*10;
	 	n=n/10;
	 	
	 }
	 printf("%d",result);
	 
 }
