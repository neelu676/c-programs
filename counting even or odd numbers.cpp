 //counting even or odd numbers
 #include<stdio.h>
 int main()
 {
 int a[6]={1,2,3,4,5,6};
 	int even=0,odd=0;
 	for(int i=0;i<6;i++)
 	{
 		if(a[i]%2==0)
 		{
 			even++;
 			
		 }
		 else
		 {
		 	odd++;
		 }
	 }
	 printf("count even numbers=%d\n",even);
	 printf("count odd numbers=%d\n",odd);
 }
