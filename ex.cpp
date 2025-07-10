 // remove the duplicat elements
 #include<stdio.h>
 int main()
 {
 	int a[100],n,i,j;
 	printf("enter number of elements:");
 	scanf("%d",&n);
 	printf("remove duplicate numbers");
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&a[i]);
	 }
	 printf("array without duplicates");
	 for(i=0;i<n;i++)
	 {
	 	int isDuplicate=0;
	 	
	 		for(j=0;j<i;j++)
	 		{
	 			if(a[i]==a[j])
	 			{
	 				isDuplicate=1;
	 				break;
				 }
			 }
			 if(isDuplicate==0)
			 {
			 	printf("%d",a[i]);
			 }
	 		
		 
	 }
 }
