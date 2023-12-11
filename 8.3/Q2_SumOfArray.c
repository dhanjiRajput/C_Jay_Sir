#include<stdio.h>

main()
{
	int i,j,r,c;
	printf("Enter Arrays Row Size    :");
	scanf("%d",&r);
	printf("Enter Arrays Column Size :");
	scanf("%d",&c);
	
	int a[r][c],b[r][c],sum_array[r][c];
	printf("Enter Arrays A Elements :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("A[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	printf("Enter Arrays B Elements :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("B[%d][%d] :",i,j);
			scanf("%d",&b[i][j]);
		}
		printf("\n");
	}
	
	printf("Arrays C Elements with Sum of A and B :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum_array[i][j]=a[i][j]+b[i][j];
		}
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",sum_array[i][j]);
		}
		printf("\n\n");
	}
}
