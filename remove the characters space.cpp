//  remove the characters space
#include<stdio.h>
int main()
{
   char str[100];
   int i,j=0;
   printf("enter string:");
   gets(str);
   for(i=0;str[i]!='\0';i++)
   {
   	
   	if(str[i]!=' ')
   	{
	   	str[j]=str[i];
   		j++;
	   }	   
   }
   str[j]='\0';
   printf("without the space=%s\n",str);
}
