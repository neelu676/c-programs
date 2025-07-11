 // palindrome of the string
 #include<stdio.h>
 #include<string.h>
 int main()
 {
 	char str[100];
 	int i,isPalindrome=1,len;
 	printf("enter string:");
 	scanf("%s",str);
 	len=strlen(str);
 	for(i=0;i<len/2;i++)
 	{
 		if(str[i]!=str[len-i-1])
 		{
 			isPalindrome=0;
 			break;
		 }
	 }
	 if(isPalindrome)
	 {
	 	printf("string is palindrome");
	 	
	 }
	 else
	 {
	 	printf("string is not palindrome");
	 }
 }
