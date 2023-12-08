#include<stdio.h>

main()
{
	int i,j,k=1,n;
	
	printf("How Many Steps U want :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",k++);
		}
		printf("\n\n");
	}
}
