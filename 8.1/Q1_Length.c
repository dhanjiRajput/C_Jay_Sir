#include<stdio.h>

main()
{
	int i,count=0,n;
	
	printf("Enter Array Size :");
	scanf("%d",&n);
	
	int a[n];
	
	printf("Enter Array Elements :\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] :",i);
		scanf("%d",&a[i]);	
	}
	
	for(i=0;i<n;i++)
	{
		count++;
	}
	
	printf("Array Of Length :%d",count);
}
