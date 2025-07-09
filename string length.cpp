 // string length
 #include<stdio.h>
 int main()
 {
 	char str[37];
 	int length=0,i=0;
 	printf("enter string:");
 	gets(str);
 	while(str[i]!='\0')
 	{
 		length++;
 		i++;
	 }
	 printf("length of the string:%d\n",length);
 }
