 // largest number and smallest number in array
 #include<stdio.h>
 int main()
 {
 	int n,i,smallest,largest;
 	int arr[100];
 	printf("enter number of the  elements array:");
 	scanf("%d",&n);
 	printf("enter element:");
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&arr[i]);
 		
 		
	 }
	 smallest=largest=arr[0];
	 for(i=1;i<n;i++)
	 {
	 	if(arr[i]<smallest)
	 	{
	 		smallest=arr[i];
		 }
	 	
	 	if(arr[i]>largest)
	 	{
	 		largest=arr[i];
		 }
	 	
	 }
	 printf("largest number=%d\n",largest);
	 printf("smallest number=%d\n",smallest);
 }
