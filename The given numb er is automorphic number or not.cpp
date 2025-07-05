 // The given numb er is automorphic number or not
 #include<stdio.h>
 #include<math.h>
 int main()
 {
 	int n,temp,count=0,square;
 	printf("enter n:");
 	scanf("%d",&n);
   square=n*n;
 	temp=n;
 	while(temp>0)
 	{
 		count++;
 		temp=temp/10;
	 }
	 int lastDigits = square % (int)pow(10, count);
	 if(lastDigits==n)
	 printf("%d is automorphic number\n",n);
	 else
	 printf("%d is not automorphic number\n",n);
 }
