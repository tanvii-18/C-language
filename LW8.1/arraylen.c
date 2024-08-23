#include<stdio.h>
#include<conio.h>

void main()
{
	int n,i;
	
	printf("Enter the size of aaray :");
	scanf("%d", &n);
	
	int a[n];
	
	for(i=0; i<n; i++)
	{
		printf("a[%d] = ", i);	
		scanf("%d", &a[i]);
	}

	
	printf("Length of array is %d.", n);
}