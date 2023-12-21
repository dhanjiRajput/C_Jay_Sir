#include<stdio.h>
#include "my_function.c"

void main()
{
	int n;
	printf("Enter Array Of Lenghth :");
	n=getInt();
	
	int a[n],b[n],c[n];
	
	ArrayInput(a,n);
	printf("\n");
	ArrayInput(b,n);
	printf("\n");
	ArrayOutput(a,n);
	printf("\n");
	ArrayOutput(b,n);
	printf("\n");
	
	ArraySum(a,b,n);
	ArraySub(a,b,n);
}
