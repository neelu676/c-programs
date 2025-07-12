 // Anagrams or not 
 #include<stdio.h>
 #include<string.h>
 int main()
 {
 	char str1[100],str2[100];
 	int i,j,count;
 	printf("enter string1:");
 	scanf("%s",str1);
 	printf("enter string2:");
 	scanf("%s",str2);
     for(i=0;str1[i]!='\0';i++)
     {
     	for(j=0;str2[j]!='\0';j++)
     	{
     		if(str1[i]==str2[j])
     		{
     			count++;
     			str2[j]='*';
     			break;
			 }
		 }
	}
	for(i=0;str1[i]!='\0';i++);
	for(j=0;str2[j]!='\0';j++);
	if(count==i&&i==j)
	printf("anugram");
	else
	printf("not anugram");
		 
	 
 }
