#include<stdio.h>
#include<conio.h>

main()
{
	int i,j,k,n;
	clrscr();
	printf("Enter N step :");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(k=i;k>1;k--)
		{
			printf("  ");
		}
		for(j=i;j<=n;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	getch();
}