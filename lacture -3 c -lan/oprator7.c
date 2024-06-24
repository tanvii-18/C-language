#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y,z;
	
	printf("enter the value of x :");
	scanf("%d", &x);
	printf("\nenter the value of y :");
	scanf("%d", &y);
	
	printf("(x+y+z)² = %d",(x*x) + (y*y) + (z*z) + (2*(x*y)+(y*z)+(z*x)));
	
}
