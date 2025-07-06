 // The given numbers find the LCM
 #include<stdio.h>
 int main()
 {
 	int n1,n2,i,hcf=1;
 	printf("enter n1,n2:");
 	scanf("%d%d",&n1,&n2);
 	for(i=1;i<=n1||i<=n2;i++)
 	{
 		if(n1%i==0&&n2%i==0)
 		hcf=i;
	 }
	  //lcm formula
	  int lcm=(n1*n2)/hcf;
	  printf("%d is lcm",lcm);
 }
 
