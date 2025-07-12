 // frequency of the string
 #include<stdio.h>
 int main()
 {
 	char str[100];
 	int i,count[26]={0};
 	printf("enter string:");
 	scanf("%s",str);
 	for(i=0;str[i]!='\0';i++)
 	{
 		if(str[i]>='a'&&str[i]<='z')
 		{
 			count[str[i]-'a']++;
 			
		 }
	 }
	 printf("character frequencies\n:");
	 for(i=0;i<26;i++)
	 {
	 if(count[i]>0)
	 {
	 	printf("%c =%d\n",i+'a',count[i]);
		 }	
	 }
 }
