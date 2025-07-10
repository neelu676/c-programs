 // repeated elements
 #include<stdio.h>
 int main()
 {
 	int n,a[100],i,j;
 	printf("enter numbber of elements:");
 	scanf("%d",&n);
 	 printf("enter integers");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
printf("repeated elements");
for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(a[i]==a[j])
		{
		printf("%d\n",a[i]);	
		}
	}
}
return 0;
 	 
 }
