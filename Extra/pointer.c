#include<stdio.h>

void main()
{
	int a,b,c,d,e;
	
	int *ptr1;
	int *ptr2;
	int *sum;
	int *sub;
	int *mul;
	
	ptr1=&a;
	ptr2=&b;
	sum=&c;
	sub=&d;
	mul=&e;
	
	printf("Enter A :");
	scanf("%d",ptr1);
	
	printf("Enter B :");
	scanf("%d",ptr2);
	
	*sum=(*ptr1) +(*ptr2);
	*sub=(*ptr1) -(*ptr2);
	*mul=(*ptr1) *(*ptr2);
	
	printf("Addition\t:%d\n",*sum);
	printf("Subtraction\t:%d\n",*sub);
	printf("Multiplication\t:%d\n",*mul);
}
