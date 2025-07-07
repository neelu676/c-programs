 // given year month how many days
 #include<stdio.h>
 int main()
 {
 	int year,month,days;
 	printf("enter months(1_12):");
 	scanf("%d",&month);
 	
 	printf("enter year");
 	scanf("%d",&year);
 	switch(month)
 	{
 		case 1:case 3:case 5:case 7:case 8:case 10:case 12:
 		days=31;
 		break;
 		
 		case 4:case 6:case 9:case 11:
 		days=30;
 		break;
 		case 2:
 			if((year%4==0&&year%100!=0)||(year%400==0))
 			days=29;
 			else
 			days=28;
 			printf("invalid month");
	 }
	 printf("%d",days);
 }
