#include<stdio.h>
#include<conio.h>

void main()
{
	int i=2,n;
	
	printf("enter the number :");
	scanf("%d", &n);
	
	do
	{
		printf("%d ",i);
		i+=2;
	}while(i<=n);
}
