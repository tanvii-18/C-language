#include<stdio.h>
#include<conio.h>

void main()
{
	int celsius,Fahrenheit,F;
	
	printf("enter degree celsius :");
	scanf("%d" , &celsius);
	Fahrenheit =  ( celsius * 9/5) + 32;
	
	printf("Fahrenheit : %d" , Fahrenheit);
}