 // address of the array elements
 #include<stdio.h>
 int main()
 {
 	int a[5]={10,20,30,40,50};
 	int *ptr=a;
 	for(int i=0;i<5;i++)
 	{
 		printf("%u\t%d\n",(ptr+i),*(ptr+i));
	 }
 }
