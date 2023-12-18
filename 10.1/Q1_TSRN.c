#include<stdio.h>

void cube(int n)
{
	printf("Cube is :%d",n*n*n);
}

void main()
{
	int n;
	printf("Enter Any Number :");
	scanf("%d",&n);
	
	cube(n);
}
