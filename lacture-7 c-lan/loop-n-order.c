#include<stdio.h>
#include<conio.h>

void main()
{
	int n;
	
	printf("Enter n :");
	scanf("%d", &n);
	
	while(1>=n)
	{
		printf("%d\n", n);
		n++;
	}
}