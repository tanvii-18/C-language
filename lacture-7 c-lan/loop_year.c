#include<stdio.h>
#include<conio.h>

void main()
{
	int start,end;
	
	printf("Enter starting year :");
	scanf("%d", &start);
	
	printf("Enter ending year :");
	scanf("%d", &end);
	
	
	while(start<=end)
	{
		if((start % 4 == 0 && start% 100!=0) || start % 400 == 0);
		{
			printf("%d\n", start);
		}
		start++;
	}
}