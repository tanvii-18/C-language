#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	
	for(a=1; a<=5; a++)
	{
		for(b=5; b>=a; b--)
		{
			printf("%d ",b);
		}
			printf("\n");
	}
}