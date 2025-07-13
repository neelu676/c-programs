 // pre increment
 #include<stdio.h>
 int main()
 {
 	int x=10,y=5;
 	 int *ptr=&x;
 	int z=*++ptr;
 	printf("%d%u%d",z,ptr,*ptr);
 }
