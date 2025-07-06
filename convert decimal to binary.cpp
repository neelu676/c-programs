  // convert decimal to binary
  #include<stdio.h>
  int main()
  {
  	int binary[32],i,decimal,n;
  	printf("enter decimal number:");
  	scanf("%d",&decimal);
  	n=decimal;
  	if(n==0)
  	{
  		printf("binary  number");
	  }
	  
	  
	  while(n>0)
	  {
	  	binary[i]=n%2;
	  	n=n/2;
	  	i++;
	  }
	 
	  for(int j=i-1;j>=0;j--)
	  {
	  	printf("%d",binary[j]);
	  }
  }
