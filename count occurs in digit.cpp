 // count occurs in digit
 #include<stdio.h>
 int main()
 {
 	int count=0,rem,digit,n;
 	printf("enter number:");
 	scanf("%d",&n);
 	 
 	 printf("enter digit:");
 	 scanf("%d",&digit);
 	 while(n>0)
 	 {
 	 	rem=n%10;
 	 	if(rem==digit)
 	 	
 	 		count++;
 	 		n=n/10;
		  
	  }
	  printf(" digit %d count occurs in  %d times",digit,count);
  } 
