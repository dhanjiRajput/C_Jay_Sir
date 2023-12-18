#include<stdio.h>


void divisible(int n)
{
	if(n%3==0 && n%5==0)
	{
		printf("The given Number is Divided by 3 & 5");
	}
	else
	{
		printf("The given Number is Not Divided by 3 & 5");
	}
}


void main()
{
	int n;
	printf("Enter Any Number :");
	scanf("%d",&n);
	
	divisible(n);
}
