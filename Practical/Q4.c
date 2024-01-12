#include<stdio.h>

void main()
{
	int i,n;
	printf("Enter Array Size :");
	scanf("%d",&n);
	
	int a[n],b[i];
	
	printf("Enter Array A Elemenet :\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] :",i);
		scanf("%d",&a[i]);
	}
	
	printf("Enter Array B Elemenet :\n");
	for(i=0;i<n;i++)
	{
		printf("b[%d] :",i);
		scanf("%d",&b[i]);
	}
	
	for(i=0;i<n;i++)
	{
		a[i] = a[i]+b[i];
		b[i] = a[i]-b[i];
		a[i] = a[i]-b[i];
	}
	
	printf("After Swap The A Array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d \n",a[i]);
	}
	
	printf("After Swap The B Array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d \n",b[i]);
	}
}
