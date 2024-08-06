#include<stdio.h>
#include<conio.h>

void main()
{
	int i=1,n,sum=0;
	
	printf("Enter n :");
	scanf("%d", &n);
	
	do
	{
		//printf("sum is %d",sum);
		sum=sum+i;
		i++;
	}while(i<=n);
	
	printf("Sum is %d ",sum);
}
