#include<stdio.h>
#include<conio.h>

void num()
{
	int n;
	
	printf("Enter the number :");
	scanf("%d", &n);
	
	if(n%3==0 && n%5==0)
	{
		printf("The number is divisible by 3 & 5 Both !");
	}
	else if(n%3==0)
	{
		printf("The number is divisible by 3 Only!");
	}
	else if(n%5==0)
	{
		printf("The number is divisible by 5 Only!");
	}
	else
	{
		printf("The number is not divisible by 3 & 5 Both !");
	}
}
void main()
{
	num();
}