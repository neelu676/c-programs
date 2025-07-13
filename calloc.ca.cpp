 //  calloc.ca
 #include<stdio.h>
 #include<stdlib.h>
 int main()
 {
 	int *ptr,n,i;
 	printf("enter size:");
 	scanf("%d",&n);
 	ptr=(int *)calloc(n,sizeof(int));
 	if(ptr==NULL)
 	printf("memory not allocated");
 	else
 	printf("memory is allocated");
 	int temp;
 	for(int i=0;i<n;i++)
 	{
 		printf("enter number");
 		scanf("%d",(ptr+i));
	 }
	 for(i=0;i<n/2;i++)
	 {
	 	temp=*(ptr+i);
	 	*(ptr+i)=*(ptr+n-1-i);
	 	*(ptr+n-1-i)=temp;
	 	
	 }
	 for(i=0;i<n;i++)
	 {
	 	printf("%d\t",*(ptr+i));
	 }
	 free(ptr);
 }
