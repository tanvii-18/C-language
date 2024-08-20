#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b;
	
	for(a=5; a>=1; a--)
	{
		for(b=1; b<=4; b++)
		{
			printf(" ");    
		}
		for(b=a; b<=5; b++)
		{
			printf("%d ", b);
		}
		printf("\n");
	}
}