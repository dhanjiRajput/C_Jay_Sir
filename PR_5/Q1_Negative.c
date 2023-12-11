#include<stdio.h>

main()
{
	int i,n;
	
	printf("Enter Array Size :");
	scanf("%d",&n);
	
	int a[n];
	
	printf("Enter Array Elements :\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] :",i);
		scanf("%d",&a[i]);
	}
	
	printf("Negative Elements from an Array : ");
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			printf("%d, ",a[i]);
		}
	}
	
	
}
