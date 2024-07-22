#include<stdio.h>
#include<conio.h>

void main()
{
	int N;
	printf("Enter a number:");
	scanf("%d", &N);
	
	while(N>=1)
	{
		if(N%2!=0)
		{
			printf("%d", N);
			
  		}
  		N--;
	}
}