 // first and last letters captal letters
 #include<stdio.h>
 int main()
 {
 	char str[100];
 	int i;
 	printf("enter string:");
 	gets(str);
 	for(i=0;str[i]!='\0';i++)
 	{
 		if(i==0||str[i-1]==' ')
 		{
 			if(str[i]>='a'&&str[i]<='z')
 			{
 				str[i]=str[i]-32;
			 }
		 }
		 if(str[i+1]==' '||str[i+1]=='\0')
		 {
		 	if(str[i]>='a'&&str[i]<='z')
		 	{
		 		str[i]=str[i]-32;
			 }
		 }
	 }
	 printf("%s",str);
	 
 }
