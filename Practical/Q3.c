#include<stdio.h>

void main()
{
	int i,n,j,k=1;
	
	printf("Enter Number of Steps :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",k++);
		}
		printf("\n");
	}
}
