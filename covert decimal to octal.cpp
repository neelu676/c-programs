 //covert decimal to octal
 #include<stdio.h>
 int main()
 {
 	int octal[32],i,decimal,n;
 	printf("enter decimal:");
 	scanf("%d",&decimal);
 	n=decimal;
 	if(n==0)
 	{
 		printf("octal number");
	 }
	 while(n>0)
	 {
	 	octal[i]=n%8;
	 	n=n/8;
	 	i++;
	 }
	 for(int j=i-1;j>=0;j--)
	 {
	 	printf("%d",octal[j]);
	 }
 }
