 // enum signal program
 #include<stdio.h>
 enum TrafficLight{RED,YELLOW,GREEN};
 int main()
 {
 	enum TrafficLight signal;
 	signal=RED;
 	if(signal==RED)
 	{
 		printf(" stop ");
	 }
	 else if(signal==YELLOW)
	 {
	 	printf(" get ready");
	 	
	 }
	 else if(signal==GREEN)
	 {
	 	printf("go");
	 }
 }

