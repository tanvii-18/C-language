#include<stdio.h>
#include<conio.h>

void main()
{
  int number=0;
  
  printf("enter the number :");
  scanf("%d", &number);
  
  if(number>0)
  {
  	printf("This number is positive!");
	  }	
  else if(number<0)
  {
  	printf("This number is negative  !");
  }
  else 
  {
  	printf("This number is neutral !");
  }
}