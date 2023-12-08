#include<stdio.h>

main()
{
	int i,j,k=11,n;
	
	printf("How Many Steps U want :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",k);
			k=k+11;
		}
		printf("\n\n");
	}
}
