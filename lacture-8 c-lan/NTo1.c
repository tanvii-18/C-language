#include<stdio.h>
#include<conio.h>

void main()
{
	int i=1,n;
	
	printf("Enter the value of n :");
	scanf("%d",&n);
	
	do
	{
		printf("%d ",i);
		i--;
	}while(i>=n);
}
