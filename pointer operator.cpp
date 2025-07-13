 // pointer operator
 #include<stdio.h>
 int main()
 {
 	int x=3;
 	float y=2.4;
 	char a='k';
 	int *ptr=&x;
 	float *ptr1=&y;
 	char *ptr2=&a;
 	printf("%u%d\n",ptr,*ptr);
 	printf("%u%f\n",ptr1,*ptr1);
 	printf("%u%c\n",ptr2,*ptr2);
 }
