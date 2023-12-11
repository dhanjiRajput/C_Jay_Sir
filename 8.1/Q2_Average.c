#include<stdio.h>

main()
{
	int i,n;
	int sum=0;
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
		sum=sum+a[i];
	}
	
	printf("Average of Array :%.2f",(float)sum/n);
}
