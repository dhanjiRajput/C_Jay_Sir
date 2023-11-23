#include<stdio.h>
#include<conio.h>

main()
{
	int n1=0,n2=1,n3,n,i=1;
	clrscr();

	printf("Enter Any Number :");
	scanf("%d",&n);

	if(n>2)
	{
		printf("0 1 ");
		while(n>2)
		{
			n3=n1+n2;
			printf("%d ",n3);
			n1=n2;
			n2=n3;
			n--;
		}
	}
	else
	{
		while(i<=n)
		{
			printf("%d ",i-1);
			i++;
		}
	}
	getch();
}

