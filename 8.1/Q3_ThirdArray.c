#include<stdio.h>

main()
{
	int i,n;
	
	printf("Enter Array Size :");
	scanf("%d",&n);
	
	int a[n],b[n],c[n];
	
	printf("Enter Array A Elements :\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] :",i);
		scanf("%d",&a[i]);
	}
	
	printf("\nEnter Array B Elements :\n");
	for(i=0;i<n;i++)
	{
		printf("b[%d] :",i);
		scanf("%d",&b[i]);
	}
	
	printf("\nArray C is : ");
	for(i=0;i<n;i++)
	{
		c[i]=a[i]+b[i];
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d, ",c[i]);
	}
	
	
}
