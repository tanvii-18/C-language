#include<stdio.h>
#include<conio.h>

void main()
{
	int length,breadth,area;
	
	printf("enter the length :");
	scanf("%d", &length);
	
	printf("enter the breadth :");
	scanf("%d", &breadth );
	
	area = length*breadth;
	
	printf("area of rectangle : %d",area);
}