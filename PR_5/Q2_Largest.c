#include<stdio.h>

main()
{
	int j,i,r,c,max=0;
	
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
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j]>max)
			{
					max=a[i][j];
			}
		}
	}
	printf("The Largest Elements is :%d",max);
}
