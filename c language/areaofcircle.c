#include<stdio.h>
#include<conio.h>

void main()
{
	float pi=3.14,r,area;
	
	printf("enter the value of radius :");
	scanf("%f", &r);
	
	area = pi*r*r;
	
	printf("area = %.2f", area);
}