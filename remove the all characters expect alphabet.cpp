 // remove the all characters expect alphabet
 #include<stdio.h>
 int main()
 {
 	char str[100];
 	int i;
 	printf("enter string:");
 	scanf("%s",str);
 	printf("only Alphabets");
 	for(i=0;str[i]!='\0';i++)
 	{
 		if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z'))
 		{
 			printf("%c",str[i]);
		 }
	 }
 }
