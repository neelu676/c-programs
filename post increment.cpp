 // post increment
 #include<stdio.h>
 int main()
 {
 	int x=5,y=8;
 	int *ptr=&x;
 	int z=*ptr++;
 	printf("%d%u%d",z,ptr,*ptr);
 }
