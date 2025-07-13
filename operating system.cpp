 // operating system
 #include<stdio.h>
 int main()
 {
 	int *p;
 	float *p1;
 	char *p2;
 	double *p3;
 	printf("%d%d%d%d%d%d%d%d",sizeof(p),sizeof(p1),sizeof(p2),sizeof(p3),sizeof(*p),sizeof(*p1),sizeof(*p2),sizeof(*p3));
 }
