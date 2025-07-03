#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr,i,n;
	printf("enter size");
	scanf("%d",&n);
	ptr=(int*)calloc(n,sizeof (int));
	if(ptr==NULL)
	printf("memory not allocated");
	else
	{
	printf("memory successfully allocated");
		int temp;
		for(i=0;i<n;i++)
		{
			printf("enter a number");
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
	
}
