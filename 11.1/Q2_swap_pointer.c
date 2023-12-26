#include<stdio.h>

void main()
{
	int a,b;
	printf("Enter the value of X :");
	scanf("%d",&a);
	
	printf("Enter the VAlue of Y :");
	scanf("%d",&b);
	
	int *ptr1;
	int *ptr2;
	
	ptr1=&a;
	ptr2=&b;
	
	*ptr1= *ptr1 + *ptr2;
	*ptr2= *ptr1 - *ptr2;
	*ptr1= *ptr1 - *ptr2;
	
	printf("After Swaping :\n");
	printf("X :%d\n",*ptr1);
	printf("Y :%d",*ptr2);
	
}
