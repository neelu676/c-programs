 // Digit covert to words
 #include<stdio.h>
 void printDigitInWords(int digit)
 {
 	switch(digit)
 	{
 	case 0:printf("zero");break;
	 case 1:printf("one");break;
	 case 2:printf("two");break;	
	 case 3:printf("three");break;	
	 case 4:printf("four");break;	
	 case 5:printf("five");break;	
	 case 6:printf("six");break;	
	 case 7:printf("seven");break;	
	 case 8:printf("eight");break;
	 case 9:printf("nine");break;		
	 	
	 }
}
int main()
{
	int n,reversed=0,digit,temp;
	printf("enter digit:");
	scanf("%d",&n);
	temp=n;
	 if(n==0)
	 {
	 	printf("zero");
	 }
	 while(temp>0)
	 {
	 reversed=reversed*10+temp%10;
	 temp = temp / 10;
    }

    // Print each digit in words
    while (reversed > 0) {
        digit = reversed % 10;
        printDigitInWords(digit);
        reversed = reversed / 10;
    }

    return 0;
	
	 }
 
 
 
 
