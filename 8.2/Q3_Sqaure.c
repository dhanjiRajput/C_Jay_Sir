#include<stdio.h>

main()
{
	int i,n;
	
	printf("Enter Array Size :");
	scanf("%d",&n);
	
	int a[n],sqa[n];
	printf("Enter Array Elements :\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] :",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		sqa[i]=a[i]*a[i];
	}
	
	printf("Sqaure is : ");
	for(i=0;i<n;i++)
	{
		printf("%d ",sqa[i]);
	}
}
