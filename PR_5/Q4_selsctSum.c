#include<stdio.h>

main()
{
	int j,i,r,c;
	
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
	
	int r1,c1;
	int sum=0,sumc=0;
	printf("Enter Row Number\t: ");
	scanf("%d",&r1);
	printf("Elements of row %d\t: ",r1);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==r1)
			{
				printf("%d ",a[i][j]);
				sum=sum+a[i][j];
			}
		}
	}
	printf("\nSum Of Selected Row\t: %d",sum);
	
	printf("\n\nEnter Column Number\t: ");
	scanf("%d",&c1);
	printf("Elements of Column %d\t: ",r1);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(j==c1)
			{
				printf("%d ",a[i][j]);
				sumc=sumc+a[i][j];
			}
		}
	}
	printf("\nSum Of Selected Row\t: %d",sumc);
	
}
