 // The gretest of three numbers
 #include<stdio.h>
 int main()
 {
 	int a,b,c;
 	printf("enter three numbers:");
 	scanf("%d%d%d",&a,&b,&c);
 	if(a>=b&&a>=c)
 	printf("%d is gretest",a);
 	else if(b>=a&&b>=c)
 	printf("%d is gretest",b);
 	else
 	printf("%d is gretest",c);
 }
