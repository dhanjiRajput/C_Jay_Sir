#include<stdio.h>

main()
{
	int j,i,r,c;
	
	printf("Enter the Array Row Size    :");
	scanf("%d",&r);
	printf("Enter the Array Column Size :");
	scanf("%d",&c);
	
	int a[r][c];
	int b[r][c];
	
	printf("Enter Array Elements :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Array Elements :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			b[j][i]=a[i][j];
		}
	}
	
	printf("The Transpose matrix of an Array :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
}
