 //largest palindrome in  array
 #include<stdio.h>
 int main()
 {
 	int i,n,a[100],digit,reverse=0;
 	int maxpalindrome=-1;
 	printf("enter number of elements:");
 	scanf("%d",&n);
 	printf("enter integers");
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&a[i]);
 	}
 		for(i=0;i<n;i++)
 		{
 			int n=a[i];
 			int reverse=0;
 			int original=n;
		 
	 
	 while(n!=0)
	 {
	 	digit=n%10;
	 	reverse=reverse*10+digit;
	 	n=n/10;
	 }
	 if(reverse==original&&original>maxpalindrome){
	 	maxpalindrome=original;
	 }
	 }
	 if(maxpalindrome==-1)
	 {
	 	printf("no palindrome");
	 }
	 
	 else
	 {
	 	printf("largest palindrome=%d\n",maxpalindrome);
	 }
 }
