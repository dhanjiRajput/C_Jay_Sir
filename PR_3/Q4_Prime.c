#include<stdio.h>
#include<conio.h>

main()
{
	int i,j,n,count=0;
	clrscr();
	printf("Enter Any Number :");
	scanf("%d",&n);

	printf("\n\nPrime Numbers : ");
	for(i=1;i<=n;i++)
	{
		count=0;

		for(j=1;j<=n;j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}
		if(count<=2)
		{
			printf("%d ",i);
		}
	}
	getch();
}
