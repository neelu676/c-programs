 // Permutations in which n people can occupy r seats
 #include<stdio.h>
 int factorial(int n)
 {
 
 	int fact=1;
 	for(int i=1;i<=n;i++)
 	{
 		fact=fact*i;
	 }
}
int main()
{
	int r,n,perm;
	printf("enter n:");
	scanf("%d",&n);

	printf("enter r:");
	scanf("%d",&r);
	
	 if(r>n)
	 printf("seats can`t more then people");
	 else{
	 
	
	perm = factorial(n) / factorial(n - r);
	 printf("permutations=%d\n",perm);
}
 }
