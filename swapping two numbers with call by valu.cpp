 //swapping two numbers with call by value
 #include<stdio.h>
 void swap(int a,int b)
 {
 	int temp=a;
 	a=b;
 	b=temp;
 	printf("after swapping a=%d\t b=%d\n",a,b);
 }
 int main()
 {
 	int a=2,b=4;
 	printf("before swapping a=%d\t b=%d\n",a,b);
 	swap(a,b);
 	printf("a=%d\t b=%d\n",a,b);
 	
 }
