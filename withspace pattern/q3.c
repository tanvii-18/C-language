#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	
	for(a=5; a>=1; a--)//row
	{
		for(c=a; c>=1; c--)
		{
			printf("  ");
		}
		for(b=a; b<=5; b++)//column
		{
			printf("%d ", b);
		}
			printf("\n");
	}
}