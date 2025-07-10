 // non_repeating elements
 #include<stdio.h>
 int main()
 {
 	int i,j,repeat,n,a[100];
 	printf("enter number of elements:");
 	scanf("%d",&n);
 	printf("enter integers");
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&a[i]);
	 }
	 printf("non repeating elements ");
	 for(i=0;i<n;i++)
	 {
	 	repeat=0;
	 	for(j=0;j<n;j++)
	 	{
	 		if(i!=j&&a[i]==a[j])
	 		{
	 			repeat=1;
	 			break;
			 }
	 		
		 }
	 	
	 	if(repeat==0)
	 {
	 	printf("%d",a[i]);
	 }
	 }
	 
 }
