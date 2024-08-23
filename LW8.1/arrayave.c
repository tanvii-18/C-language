#include<stdio.h>
#include<conio.h>

void main()
{
	int n,i,sum=0;
	
	printf("Enter the size of array :");
	scanf("%d", &n);
	
	int a[n];
	
	for(i=0; i<n; i++)
	{
		printf("a[%d] =", i);
		scanf("%d", &a[i]);
	}
	
	for(i=0; i<n; i++)
	{
	sum = sum + a[i];
	}
	
	float average;
	
	average = (float)sum/n;
	printf("average is %.2f", average);
}