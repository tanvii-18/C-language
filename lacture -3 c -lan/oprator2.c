#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y;
	
	printf("enter the value of x :");
	scanf("%d", &x);
	printf("\nenter the value of y :");
	scanf("%d", &y);
	
	
	printf("(x-y)² = %d", (x*x) - (2*x*y) + (y*y));
	
	
	
}