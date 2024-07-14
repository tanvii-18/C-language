#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c,d;
	
	printf("enter the value of a :");
	scanf("%d", &a);
	
	printf("enter the value of b :");
	scanf("%d", &b);
	
	printf("enter the value of c :");
	scanf("%d", &c);
	
	printf("enter the value of d :");
	scanf("%d", &d);
	
     if(a<b)
	 {
	 	if(a<c)
	 	{
	 	  if(a<d)
		   {
		   	printf("a is minimum !");
		   }
		   else
		   {
		   	printf("d is minimum !");
		   }	
		}
		else
		{
			printf("c is minimum !");
		}
		
     }
	 else
	 {
	 	printf("b is minimum !");
	 }	
}