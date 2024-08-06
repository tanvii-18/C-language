#include<stdio.h>
#include<conio.h>

void main()
{
	int i=1,n;
	
	printf("Enter the number :");
	scanf("%d", &n);
	
	while(i<=10)
	{
	    n*i;
	    printf("%d * %d = %d\n", n,i,n*i);
		i++;
		
	}
	
}