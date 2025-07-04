 // the sum of digits
 #include<stdio.h>
 int main()
 {
 	int num,sum=0,digit;
 	printf("enter number:");
 	scanf("%d",&num);
 	while(num!=0)
 	{
 		digit=num%10;
 		sum+=digit;
 		num=num/10;
	 }
	 printf("sum of digit=%d\n",sum);
 }
