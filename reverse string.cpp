 // reverse string 
 #include<stdio.h>
 #include<string.h>
 int main()
 {
 	char str[100];
 	int i;
 	printf("enter string:");
 	scanf("%s",str);
 	
 	for(i=0;str[i]!='\0';i++);
 	for(i=i-1;i>=0;i--)
 	{
 		printf("%c",str[i]);

	 }
 	
 	
 }
