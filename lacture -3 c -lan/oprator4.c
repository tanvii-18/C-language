#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y;
	printf("enter the value of x :");
	scanf("%d", & x);
	printf("enter the value of y :");
	scanf("%d", & y);
	
	printf("(x-y)3 = %d", (x*x*x)-(y*y*y)-((3*x*y)*(x+y)));
}