 // witout return type with arguments
 #include<stdio.h>
 void add(int a,int b)
 {
 	int sum=a+b;
 	printf("%d",sum);
 }
 int main()
 {
 	int x,y;
 	printf("enter x,y:");
 	scanf("%d%d",&x,&y);
 	add(x,y);
 }
