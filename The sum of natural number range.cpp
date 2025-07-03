 //The sum of natural number range
 #include<stdio.h>
 int main()
 {
 	int n,m,sum=0;
 	printf("enter numbers:");
 	scanf("%d%d",&n,&m);
 	for(int i=n;i<=m;i++)
 	sum+=i;
 	printf("sum is %d",sum);
 }
