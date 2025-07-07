 // prime numbers 2 to 100 range
 #include<stdio.h>
 int main()
 {
 	int i,j,isprime;
 	printf(" prime numbers from 2 t0 100:");
 	for(i=2;i<=100;i++)
 	{
 		isprime=1;
	 
	 for(j=2;j<=i/2;j++)
	 {
	 	if(i%j==0)
	 	{
		 
	 	isprime=0;
	 	break;
	    }
	 }
	 if(isprime)
	 {
	 
	 printf("%d,",i);
}
}
}
 
