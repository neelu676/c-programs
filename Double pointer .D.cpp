 // Double pointer
 #include<stdio.h>
 int main()
 {
 	int x=5;
 int *ptr=&x;
 int **ptr1=&ptr;
 	printf("%u%u%u%d%d",ptr,ptr1,*ptr,*ptr1,**ptr1);
 }
