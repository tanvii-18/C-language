#include<stdio.h>
#include<conio.h>

void main()
{
	int firstAngle,secondAngle,ThirdAngle,area;
	
	printf("enter first angle taingle :");
	scanf("%d",&firstAngle);
	
	printf("enter second angle taingle :");
	scanf("%d",&secondAngle);
	
	area = firstAngle*secondAngle/2;
	
	printf("Third Angle = %d" , area);
	
}