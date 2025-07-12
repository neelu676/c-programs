 //  remove the brackets in expression 
 #include<stdio.h>
 int main()
 {
 	char expr[100];
 	int i;
 	printf("enter expr:");
 	scanf("%[^\n]", expr); 
 	
 	for( i=0;expr[i]!='\0';i++)
 	{
 		if(expr[i]!='('&& expr[i]!=')')
 		{
 			printf("%c",expr[i]);
		 }
	 }
 }
