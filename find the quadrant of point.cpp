 // find the quadrant of point
 #include<stdio.h>
 int main()
 {
 	int x,y;
 	printf("enter x,y:");
 	scanf("%d%d",&x,&y);
 	if(x>0&&y>0)
 	printf("point lines first quadrant\n");
 	else if(x<0&&y<0)
 	printf("point lines third quadrant\n");
 	else if(x<0&&y>0)
 	printf("point lines second quadrant\n");
 	else if(x>0&&y<0)
 	printf("point lines fourth quadrant\n");
 	else if(x==0&&y==0)
 	printf("point lines origin\n");
 	else if(x==0)
 	printf("point lines y axis\n");
 	else if(y==0)
 	printf("point lines x axis\n");
 }
