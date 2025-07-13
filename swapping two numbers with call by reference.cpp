 // swapping two numbers with call by reference
 #include<stdio.h>
 void swap(int *p,int *q)
 {
 	int temp=*p;
 	*p=*q;
 	*q=temp;
 	printf("after swapping a=%d\t b=%d\n",*p,*q);
 }
 int main()
 {
 	int a=5,b=8;
 	printf("before swapping a=%d\t b=%d\n",a,b);
 	swap(&a,&b);
 	printf("a=%d\t b=%d\n",a,b);
 }
