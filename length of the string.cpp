 // length of the string
 #include<stdio.h>
 int main()
 {
 	char str[100];
 	int length=0,i;
 	printf("enter a string:");
 	scanf("%s",str);
 	for(i=0;str[i]!='\0';i++)
 	{
 		length++;
	 }
	 printf("length of the string=%d\n",length);
 }
