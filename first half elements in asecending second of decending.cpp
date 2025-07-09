 // first half elements in asecending second of decending
 #include<stdio.h>
 int main()
 {
 	int n,i,j;
 	printf("enter number of elemets:");
 	scanf("%d",&n);
 	int arr[n];
 	printf("enter array of elements");
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&arr[i]);
	 }
	 int mid=n/2;
	 for(i=0;i<mid-1;i++)
	 {
	 	for( j=i+1;j<n;j++)
	 	{
	 		if(arr[i]>arr[j])
	 		{
	 			int temp=arr[i];
	 		arr[i]=arr[j];
	 		arr[j]=temp;
		 }
			 }
	 		
		 }
	 
	 for(i=mid;i<n-1;i++)
	 {
	 	for(j=i+1;j<n;j++)
	 	{
	 		if(arr[i]<arr[j])
	 		{
	 			int temp=arr[i];
	 		arr[i]=arr[j];
	 		arr[j]=temp;
			 }
	 		
		 }
	 }
	 printf("result\n");
	 for(i=0;i<n;i++)
	 {
	 	printf("%d",arr[i]);
	 }
	 printf("\n");
 }
