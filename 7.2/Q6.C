#include<stdio.h>
#include<conio.h>

main()
{
	int i,j,k,n;
	clrscr();
	printf("Enter N step :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(k=i;k>1;k--)
		{
			printf("  ");
		}
		for(j=n;j>=i;j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	getch();
}