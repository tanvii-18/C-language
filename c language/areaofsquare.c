#include<stdio.h>
#include<conio.h>

void main()
{
	float side,area;
	
	printf("enter the side of square :");
	scanf("%f" , &side);
	
	area = side*side;
	
	printf("area of square = %.0f",area);
	
}