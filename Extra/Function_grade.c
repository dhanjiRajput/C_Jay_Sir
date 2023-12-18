#include<stdio.h>
#include "my_function.c"


void main()
{
	float avg=getGrade();
	
	if(avg>=91)
	{
		printf("Grade : A");
	}
	else if(avg>=81 && avg<=90)
	{
		printf("Grade : B");
	}
	else if(avg>=71&& avg<=80)
	{
		printf("Grade : C");
	}
	else if(avg>=61&&avg<=70)
	{
		printf("Grade : D");
	}
	else
	{
		printf("Do Preparation.......!");
	}
}
