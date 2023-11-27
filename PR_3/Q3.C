#include<stdio.h>
#include<conio.h>

main()
{
	int ld,fd,n;
	clrscr();

	printf("Enter Any Number :");
	scanf("%d",&n);

	ld=n%10;

	while(n>9)
	{
		n=n/10;
	}

	fd=n;
	printf("Sum Of Last and First DIgit Number :%d",fd+ld);
	getch();
}