#include<stdio.h>
#include<conio.h>

void main()
{
	int n,i,j;
	
	printf("Enter the size of array :");
	scanf("%d", &n);
	
	int a[n],b[n],c[n];
	
	printf("\nEnter the elements of array :\n");
	
	for(i=0; i<n; i++)
	{
		printf("Enter a[%d] :",i);
		scanf("%d", &a[i]);	
	}
	printf("\n");
	
		for(i=0; i<n; i++)
	{
		printf("Enter b[%d] :",i);
		scanf("%d", &b[i]);
	}
	
	for(i=0; i<n; i++)
	{
		c[i] = a[i] + b[i];
	}
	printf("\n");
	
	for(i=0; i<n; i++)
	{
		printf("Addition is %d\n", c[i] = a[i] + b[i]);
	}
	
	
	
}