 // octal to decimal
 #include<stdio.h>
 int main()
 {
 	long long octal;
 	int decimal=0,base=1,rem;
 	printf("enter octal:");
 	scanf("%lld",&octal);
 	while(octal>0)
 	{
 		rem=octal%10;
 		decimal=decimal+rem*base;
 		base=base*8;
 		octal=octal/10;
	 }
	 printf("octal to decimal=%d\n",decimal);
 }
