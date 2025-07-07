 //recursion with power of number
 #include<stdio.h>
 #include<math.h>
 int powRec(int a,int b)
 {
 	if(b==0)
 	return 1;
 	return a*powRec(a,b-1);
 }
 int main()
 {
 	int a,b;
 	printf("enter a,b:");
 	scanf("%d%d",&a,&b);
 	printf("number is %d is power of %d return is %d",a,b,powRec(a,b));
 }
