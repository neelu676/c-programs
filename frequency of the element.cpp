 //frequency of the element
 #include<stdio.h>
 int main()
 {
 	int i,j,count,a[100],n;
 	printf("enter number of element:");
 	scanf("%d",&n);
 	
 	printf("enter elements");
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&a[i]);
	 }
	 
	 printf("frequency of each element");
	 for(i=0;i<n;i++)
	 {
	 	count=1;
	 	int alreadycounted=0;
	 	
	 	for(j=0;j<i;j++)
	 	{
	 		if(a[i]==a[j])
	 		{
	 			alreadycounted=1;
	 			break;
			 }
		 }
		 if (alreadycounted==1)
	 continue;
	 
	 
	 
	 
	 for(j=i+1;j<n;j++)
	 {
	 	if(a[i]==a[j])
	 	{
	 		count++;
		 }
	 }

	 printf("%d occurs %d times\n",a[i],count);
}
 }
