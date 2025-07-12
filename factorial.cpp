//with return type without arguments factorial
#include<stdio.h>
int fact()
{
	int n,result=1;
	printf("enter n:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
	result=result*i;	
	}
	return result;
}
int main()
{
	
	
	int result;
	result=fact();
	printf("%d",result);
}
