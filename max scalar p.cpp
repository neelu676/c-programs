 // maximum sorting scalar product
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
 int main()
 {
 	int a[3]={3,2,1};
 	int b[3]={5,6,2};
 	int i,product=0;
 	sortAsc(a,3);
 	sortAsc(b,3);
 	for(i=0;i<3;i++)
 	{
 		product+=a[i]*b[i];
	 }
	 printf("maximum scalar product=%d\n",product);
 }
