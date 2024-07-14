#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y,z;
	
	printf("enter vthe value of x :");
	scanf("%d", &x);
	
	printf("enter vthe value of y :");
	scanf("%d", &y);
	
	printf("enter vthe value of z :");
	scanf("%d", &z);
	
	(x>y)?(x>z)? printf("x is maximum !") : printf("z is maximum !") : (y>z)? printf("y is maximum !") : printf("z is maximum !");
}

