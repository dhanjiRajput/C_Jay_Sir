#include<stdio.h>

main()
{
	int i,j,r,c;
	
	printf("Enter Arrays Row Size    :");
	scanf("%d",&r);
	printf("Enter Arrays Column Size :");
	scanf("%d",&c);
	
	int a[r][c];
	int sum=0,count=0;
	
	printf("Enter Arrays Elements :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			count++;
		}
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum=sum+a[i][j];
		}
	}
	
	printf("Average of An Array :%.2f",(float)sum/count);
}
