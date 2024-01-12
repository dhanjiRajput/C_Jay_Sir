#include<stdio.h>

void main()
{
	int i,j,r,c,sum1=0,sum2=0;
	
	printf("Enter Row size :");
	scanf("%d",&r);
	printf("Enter Column Size :");
	scanf("%d",&c);
	
	int arr[r][c];
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("arr[%d][%d] : ",i,j);
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}
	
	printf("Original Array Element\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",arr[i][j]);
			
		}
		printf("\n");
	}
	
	
	printf("Diagonal Element \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==j)
			{
				printf("%d ",arr[i][j]);
				sum1=sum1+arr[i][j];
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	printf("The Sum is :%d",sum1);
	
	printf("\n\nAnti-Diagonal Element \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i+j==2)
			{
				printf("%d ",arr[i][j]);
				sum2=sum2+arr[i][j];
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	printf("The Sum is :%d",sum2);
}
