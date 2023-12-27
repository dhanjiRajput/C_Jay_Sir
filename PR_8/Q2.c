#include<stdio.h>


void cube(int r,int c,int *ptr[r][c])
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",(*ptr[i][j])*(*ptr[i][j])*(*ptr[i][j]));
		}
		printf("\n");
	}
	
}


void main()
{
	int r,c,i,j;
	printf("Enter Array Row Size :");
	scanf("%d",&r);
	printf("Enter Array Column SIze :");
	scanf("%d",&c);
	
	int a[r][c];
	int *ptr[r][c];
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d] :",i);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			ptr[i][j]=&a[i][j];
		}
	}
	
	cube(r,c,&ptr);
	
}
