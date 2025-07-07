 // count the number possible decodings
 #include<stdio.h>
 int main()
 {
 	char digit[10];
 	int count=1;
 	printf("enter 2 or 3 digit number:");
 	scanf("%s",digit);
 	if(digit[0]==0)
 	{
 		printf("invalid code");
 		
	 }
	 if((digit[0]=='1'||digit[0]=='2')&&(digit[1]<='6'))
	 {
	 
	 count++;
}
	 if(digit[2]!='\0')
	 {
	 
	 if((digit[1]=='1'||digit[1]=='2')&&(digit[2]<='6'))
	 count++;
}
printf("%d is possible decoding",count);
	 
	 
 }
