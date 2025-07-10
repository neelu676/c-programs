 // sorting scalar product
 #include<stdio.h>
 int main()
 {
 	int a[3]={1,4,2};
 	int b[3]={2,1,5};
 	int i,product=0;
 	for(i=0;i<3;i++)
 	{
 		product+=a[i]*b[i];
	 }
	 printf("sorting scalar product=%d\n",product);
 }
