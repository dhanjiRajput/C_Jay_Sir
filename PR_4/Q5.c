#include<stdio.h>

main()
{
	int i,j,k,n;
	
	printf("Enter How Much Steps You Want :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
		}
		for(k=i;k<n;k++)
		{
			printf("    ");
		}
		for(j=i;j>=1;j--)
		{
			printf("%d ",j);
		}
		printf("\n\n");
	}
	for(i=n-1;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
		}
		for(k=i;k<=n-1;k++)
		{
			printf("    ");
		}
		for(j=i;j>=1;j--)
		{
			printf("%d ",j);
		}
		printf("\n\n");
	}
}
