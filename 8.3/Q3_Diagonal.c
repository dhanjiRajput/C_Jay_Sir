#include<stdio.h>

main()
{
	int i,j,r,c,sum=0;
	printf("Enter the Array Row Size    :");
	scanf("%d",&r);
	printf("Enter the Array Column Size :");
	scanf("%d",&c);
	
	int a[r][c];
	printf("Enter Array Elements :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("A[%d][%d] :",i,j);	
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	printf("Entered Array Elements :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);	
		}
		printf("\n");
	}
	
	printf("Diagonal Array Elements :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==j)
			{
				printf("%d ",a[i][j]);	
				sum=sum+a[i][j];
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	printf("\nSum of Diagonal Elements :%d",sum);
}
