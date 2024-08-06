#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,a=0,b=1,c;
	
	printf("Enter the num :");
	scanf("%d", &n);
	
	printf("fabonacci series :");
	
	for(i=0; i<n; i++)
	{
		
		printf("%d ", a);
		c=a+b;
		a=b;
		b=c;
	}
}