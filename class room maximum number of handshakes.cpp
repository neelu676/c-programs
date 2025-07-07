 // class room maximum number of handshakes
 #include<stdio.h>
 int main()
 {
 	int n,handshakes;
 	printf("enter number:");
 	scanf("%d",&n);
 	handshakes=n*(n-1)/2;
 	printf("%d maximum number of handshakes",handshakes);
 }
