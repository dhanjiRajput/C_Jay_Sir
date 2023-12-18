#include<stdio.h>

void Arith(int a,int b)
{
	sum(a,b);
	sub(a,b);
	mul(a,b);
}


void sum(int a,int b)
{
	printf("Addition\t:%d\n",a+b);	
}

void sub(int a,int b)
{
	printf("Subtraction\t:%d\n",a-b);	
}

void mul(int a,int b)
{
	printf("Multiplication\t:%d\n",a*b);	
}



void main()
{
	int a,b;
	printf("Enter Number A:");
	scanf("%d",&a);
	
	printf("Enter Number B:");
	scanf("%d",&b);
	
	Arith(a,b);
}
