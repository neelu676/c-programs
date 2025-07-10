 // distinict number
 #include<stdio.h>
 int main()
 {
 	int i,j,n,a[100],isDuplicate,count=0;
 	printf("enter number of elements:");
 	scanf("%d",&n);
 	 
 	 printf("enter integers");
 	 for(i=0;i<n;i++)
 	 {
 	 	scanf("%d",&a[i]);
 	 	
	  }
	  for(i=0;i<n;i++)
	  {
	  	isDuplicate=0;
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
		  	count++;
		  }
	  }
	  printf("number od distinict elements=%d\n",count);
 }
