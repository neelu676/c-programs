 //second smallest number
 #include<stdio.h>
 int main()
 {
 	int n,i;
 	int smallest,second_smallest;
 	int arr[100];
 	printf("enter no of elements:");
 	scanf("%d",&n);
 	if(n<2)
 	{
 		printf("need at least 2 elements");
 		
	 }
	 printf("enter elements in array");
	 for(int i=0;i<n;i++)
	 {
	 	scanf("%d",&arr[i]);
	 }
	 if(arr[0]<arr[1])
	 {
	 	smallest=arr[0];
	 	second_smallest=arr[1];
	 }
	 else
	 {
	 	smallest=arr[1];
	 	second_smallest=arr[0];
	 }
	 for(i=2;i<n;i++)
	 {
	 	if(arr[i]<smallest)
	 	{
	 		second_smallest=smallest;
	 		smallest=arr[i];
		 }
		 else if(arr[i]<second_smallest&&arr[i]!=smallest)
		 {
		 	second_smallest=arr[i];
		 }
		 printf("Second smallest element = %d\n", second_smallest);
    return 0;
}
}
