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
		for(k=n;k>i;k--)
		{
			printf("  ");
		}
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		for(j=i-1;j>=1;j--)
		{
			printf("* ");
		}
		printf("\n");
	}
	getch();
}