 // min sort scalar product
 #include<stdio.h>
 void sortAsc(int a[],int n)
 {
 	for(int i=0;i<n-1;i++)
 	{
 		for(int j=i+1;j<n;j++)
 		{
 			if(a[i]>a[j])
 			{
 				int temp=a[i];
 				a[i]=a[j];
 				a[j]=temp;
			 }
		 }
	 }
}
	 void sortDesc(int a[],int n)
	 {
	 	for(int i=0;i<n-1;i++)
	 	{
	 		for(int j=i+1;j<n;j++)
	 		{
	 			if(a[i]<a[j])
	 			{
	 				int temp=a[i];
	 				a[i]=a[j];
	 				a[j]=temp;
				 }
			 }
		 }
	 }
	 int main()
	 {
	 	 
	 	int a[3]={1,4,5};
	 	int b[3]={5,1,2};
        
         sortAsc(a,3);
         sortDesc(b,3);
         
         int i,product=0;
         
         for(i=0;i<3;i++)
         {
         	product+=a[i]*b[i];
		 }
		 
	 
	 printf("minimum scalar product=%d\n",product); 	
 }
