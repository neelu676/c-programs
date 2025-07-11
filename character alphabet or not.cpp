 // character alphabet or not
 #include<stdio.h>
 int main()
 {
 	char c;
 	printf("enter character:");
 	scanf("%c",&c);
 	if(c>='a'&&c<='z' || c>='A'&&c<='z')
 	{
 		printf("Alphabet");
 		
	 }
	 else
	 {
	 	printf("not Alphabet");
	 }
 }
