 //   binary to decimal
 #include<stdio.h>
 int main()
 {
 	long long binary;
 	int rem,decimal=0,base=1;
 	printf("enter binary number:");
 	scanf("%lld",&binary);
 	while(binary>0)
 	{
 		rem=binary%10;
 		decimal=decimal+rem*base;
 		base=base*2;
 		binary=binary/10;
 		
	 }
	 printf("binary to decimal=%d\n",decimal);
 }
