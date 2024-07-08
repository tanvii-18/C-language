#include<stdio.h>
#include<conio.h>

void main()
{
	int average,subject1,subject2,subject3,total;
	
	printf("Enter the marks of subject 1 :");
	scanf("%d", &subject1);
	
	printf("Enter the marks of subject 2 :");
	scanf("%d", &subject2);
	
	printf("Enter the marks of subject 3 :");
	scanf("%d", &subject3);

	total=subject1+subject2+subject3;
	printf("Total marks: %d\n",total);
	
	average=(total/3)*100;
	printf("average marks : %d");
	

	
}